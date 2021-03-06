#include "GameLogicModule.h"
#include "CsvConfigSets.h"
#include "ModuleDef/ModuleMgr.h"
#include "CommonModules/Log/LogModule.h"
#include "CommonModules/Timer/ITimerModule.h"
#include "CommonModules/Network/INetworkModule.h"
#include "Player/PlayerMgr.h"
#include "ModuleDef/IModule.h"
#include "Network/Protobuf/msg.pb.h"
#include "Network/Protobuf/test.pb.h"
#include "Network/Utils/NetworkAgent.h"
#include "GameLogic/Scene/Scene.h"
#include "Network/PlayerMsgHandler.h"

GameLogicModule::GameLogicModule(ModuleMgr *module_mgr) : IGameLogicModule(module_mgr)
{
	m_csv_cfg_sets = new Config::CsvConfigSets();
	m_player_mgr = new GameLogic::PlayerMgr(this);
	m_scene = new GameLogic::Scene(this);
	m_player_msg_handler = new GameLogic::PlayerMsgHandler(this);
}

GameLogicModule::~GameLogicModule()
{
	delete m_csv_cfg_sets;
	if (nullptr != m_player_mgr)
	{
		delete m_player_mgr;
		m_player_mgr = nullptr;
	}
}

EModuleRetCode GameLogicModule::Init(void *param)
{
	WaitModuleState(EMoudleName_TIMER, EModuleState_Inited, false);
	WaitModuleState(EMoudleName_Log, EModuleState_Inited, false);
	WaitModuleState(EMoudleName_Network, EModuleState_Inited, false);

	m_log_module = m_module_mgr->GetModule<LogModule>();
	m_network_module = m_module_mgr->GetModule<INetworkModule>();
	m_timer_module = m_module_mgr->GetModule<ITimerModule>();

	m_player_msg_handler->Init();
	m_network_agent = new NetworkAgent(m_network_module);

	m_cfg_root_path = *(std::string *)param;
	while ('/' == m_cfg_root_path.back() || '\\' == m_cfg_root_path.back())
		m_cfg_root_path.pop_back();

	std::string csv_cfg_path = m_cfg_root_path + "/auto-csv/AutoCsvConfig";
	bool ret = m_csv_cfg_sets->Load(csv_cfg_path);
	m_state = ret ? EModuleState_Inited : EModuleState_Error;
	return ret ? EModuleRetCode_Succ : EModuleRetCode_Failed;
}

EModuleRetCode GameLogicModule::Awake()
{
	WaitModuleState(EMoudleName_Network, EModuleState_Awaked, false);

	bool ret = m_player_mgr->Awake("0.0.0.0", 10240);
	ret = ret && m_scene->Awake(nullptr);
	return ret ? EModuleRetCode_Succ : EModuleRetCode_Failed;
}

EModuleRetCode GameLogicModule::Update()
{
	long long now_ms = m_timer_module->NowMs();
	m_player_mgr->Update(now_ms);
	m_scene->Update(now_ms);
	return EModuleRetCode_Succ;
}

EModuleRetCode GameLogicModule::Release()
{
	return EModuleRetCode_Succ;
}

EModuleRetCode GameLogicModule::Destroy()
{
	if (nullptr != m_network_agent)
	{
		delete m_network_agent;
		m_network_agent = nullptr;
	}

	m_player_msg_handler->Uninit();

	m_log_module = nullptr;
	m_timer_module = nullptr;
	m_network_module = nullptr;
	return EModuleRetCode_Succ;
}

void GameLogicModule::HandlePlayerMsg(char *data, uint32_t data_len, GameLogic::Player *player)
{
	m_player_msg_handler->HandlePlayerMsg(data, data_len, player);
}

