#include "ConfigModule.h"
#include "CsvConfigSets.h"
#include "Modules/ModuleMgr.h"
#include "Modules/Log/LogModule.h"
#include "Modules/Timer/ITimerModule.h"

ConfigModule::ConfigModule(std::shared_ptr<ModuleMgr> module_mgr) : IConfigModule(module_mgr)
{
	m_csv_cfg_sets = new Config::CsvConfigSets();
}

ConfigModule::~ConfigModule()
{

}

EModuleRetCode ConfigModule::Init(void *param)
{
	WaitModuleState(EMoudleName_Log, EModuleState_Inited, false);

	std::string *file_path = (std::string *)param;
	bool ret = m_csv_cfg_sets->Load(*file_path);
	m_state = ret ? EModuleState_Inited : EModuleState_Error;

	std::shared_ptr<LogModule> log_module = m_module_mgr->GetModule<LogModule>();
	for (int i = 0; i < 10; ++i)
	{
		log_module->Debug(i, "i= {0}, {1} : 123xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx", i, "Debug");
		log_module->Info(i, "i= {0}, {1} : 123xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx", i, "Info");
		log_module->Warn(i, "i= {0}, {1} : 123xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx", i, "Warn");
		log_module->Error(i, "i= {0}, {1} : 123xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx", i, "Error");
		log_module->Log((ELogLevel)3, i, "i= {0}, {1} : 123xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx", i, "Error");
		log_module->Record((ELogLevel)3, i, "i= {0}, {Record} : 123xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx");
	}

	return ret ? EModuleRetCode_Succ : EModuleRetCode_Failed;
}

EModuleRetCode ConfigModule::Awake()
{
	m_test_timer = std::make_shared<ObjectBase>();
	return EModuleRetCode_Succ;
}

EModuleRetCode ConfigModule::Update()
{
	std::shared_ptr<ITimerModule> timer_module = m_module_mgr->GetModule<ITimerModule>();
	// timer_module->AddNext(TestTimer, 0);
	for (int i = 0; i < 1; ++ i)
	{
		timer_module->AddFirm([this]() { for (int i = 0; i < 1000; ++i); }, 100 * 1, -1);
		// timer_module->AddFirm([this]() { m_module_mgr->GetModule<LogModule>()->Info(7, "TestTimer"); }, 1000 * 1, -1);
		// timer_module->AddNext([this]() { m_module_mgr->GetModule<LogModule>()->Info(7, "TestTimer"); }, 0);
	}
	return EModuleRetCode_Succ;
}

EModuleRetCode ConfigModule::Release()
{
	return EModuleRetCode_Succ;
}

EModuleRetCode ConfigModule::Destroy()
{
	return EModuleRetCode_Succ;
}
