#pragma once

#include "google/protobuf/message.h"
#include "IGameLogicModule.h"
#include <functional>
#include "Common/Macro/MemoryPoolMacro.h"

namespace GameLogic 
{
	class PlayerMgr;
}
namespace Config
{
	struct CsvConfigSets;
}

class NetListenHanderTest;
class NetConnectHanderTest;
class ITimerModule;
class INetworkModule;
class LogModule;
class GameLogicModule;
class NetworkAgent;

namespace GameLogic
{
	class Scene;
	class Player;
	class PlayerMsgHandler;
}

class GameLogicModule : public IGameLogicModule
{
	friend GameLogic::PlayerMsgHandler;

	NewDelOperaDeclaration;
public:
	GameLogicModule(ModuleMgr *module_mgr);
	virtual ~GameLogicModule();
	virtual EModuleRetCode Init(void *param);
	virtual EModuleRetCode Awake();
	virtual EModuleRetCode Update();
	virtual EModuleRetCode Release();
	virtual EModuleRetCode Destroy();

	void HandlePlayerMsg(char *data, uint32_t data_len, GameLogic::Player *player);
	LogModule * GetLog() { return m_log_module; }
	ITimerModule * GetTimer() { return m_timer_module; }
	INetworkModule * GetNetwork() { return m_network_module; }
	NetworkAgent *GetNetAgent() { return m_network_agent; }
	const std::string & GetCfgRootPath() { return m_cfg_root_path; }
	Config::CsvConfigSets * GetCsvCfgSet() { return m_csv_cfg_sets; }

private:
	LogModule *m_log_module = nullptr;
	ITimerModule *m_timer_module = nullptr;
	INetworkModule *m_network_module = nullptr;
	NetworkAgent *m_network_agent = nullptr;
	Config::CsvConfigSets *m_csv_cfg_sets = nullptr;
	GameLogic::PlayerMgr *m_player_mgr = nullptr;
	GameLogic::Scene *m_scene = nullptr;
	GameLogic::PlayerMsgHandler *m_player_msg_handler = nullptr;

	std::string m_cfg_root_path;
};

