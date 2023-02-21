#pragma once
#include <windows.networking.sockets.h>
#include <iostream>
#include <memory>
#include <vector>
#include <array>
#include <errno.h>

#pragma comment(lib, "Ws2_32.lib")

#include "ClientHandler.hpp"
#include "MTSC_Handler.hpp"
#include "STMC_Handler.hpp"
//control classes
enum HandlerType {STMC,MTSC};

class ServerController
{
	SOCKET MasterSocket;
	std::vector<SOCKET> ClientSockets;

public:
	ServerController(u_short masterPort, u_short pendingQLen, HandlerType ClientHandlerType)
	{
	}

	void start()
	{
		
	}
};
