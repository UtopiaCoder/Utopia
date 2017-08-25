#pragma once

#include "google/protobuf/message.h"
#include "IGameLogicModule.h"
#include <vector>
#include <queue>
#include <functional>

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
class Player;
class GameLogicModule;
class Ping;
class Pong;


namespace GameLogic
{
	class IClientMsgHandlerDescript
	{
	public:
		IClientMsgHandlerDescript() {}
		virtual ~IClientMsgHandlerDescript() {}
		int Id() { return protocol_id; }
		virtual google::protobuf::Message *Msg() = 0;
		virtual void Handle(int protocol_id, google::protobuf::Message *msg, Player *player) = 0;

	protected:
		int protocol_id = 0;
	};

	template <typename MsgType>
	class ClientMsgHandlerDescript : public IClientMsgHandlerDescript
	{
	public:
		using ProcessFuncType = void (GameLogicModule::*)(int, MsgType *, Player *);
		//using ProcessFuncType = std::function<void(int, MsgType *, Player *)>;
		ClientMsgHandlerDescript(GameLogicModule *_game_module, int _protocol_id, ProcessFuncType _process)
		{
			game_module = _game_module;
			protocol_id = _protocol_id;
			process = _process;
			msg = new MsgType();
		}
		~ClientMsgHandlerDescript()
		{
			delete msg; 
			process = nullptr;
		}
		virtual google::protobuf::Message *Msg() { return msg; }
		virtual void Handle(int protocol_id, google::protobuf::Message *input_msg, Player *player)
		{
			(game_module->*process)(protocol_id, dynamic_cast<MsgType *>(input_msg), player);
		}

	protected:
		MsgType *msg = nullptr;
		ProcessFuncType process = nullptr;
		GameLogicModule *game_module = nullptr;
	};
}


class GameLogicModule : public IGameLogicModule
{
public:
	GameLogicModule(ModuleMgr *module_mgr);
	virtual ~GameLogicModule();
	virtual EModuleRetCode Init(void *param);
	virtual EModuleRetCode Awake();
	virtual EModuleRetCode Update();
	virtual EModuleRetCode Release();
	virtual EModuleRetCode Destroy();

	void HandlePlayerMsg(Player *player, int protocol_id, char *data, uint32_t data_len);

private:
	Config::CsvConfigSets *m_csv_cfg_sets = nullptr;
	std::shared_ptr<ObjectBase> m_test_timer = nullptr;
	std::shared_ptr<NetListenHanderTest> m_test_listen_handler = nullptr;
	std::queue<std::shared_ptr<NetConnectHanderTest>> m_test_cnn_handlers;

	GameLogic::PlayerMgr *m_player_mgr = nullptr;
	LogModule *m_log_module = nullptr;
	ITimerModule *m_timer_module = nullptr;
	INetworkModule *m_network_module = nullptr;

private:
	GameLogic::IClientMsgHandlerDescript **m_client_msg_handler_descripts = nullptr;
	void InitClientMsgHandlerDescript();
	void UnInitClientMsgHandlerDescript();
	void TestClientMsgHandler();
	void OnHandlePlayerPingMsg(int protocol_id, Ping *msg, Player *player);
	void OnHandlePlayerPongMsg(int protocol_id, Pong *msg, Player *player);
};

