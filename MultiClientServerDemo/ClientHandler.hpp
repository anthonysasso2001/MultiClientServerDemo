#pragma once
#include <windows.networking.sockets.h>
#include <vector>
#include <array>

//client handler settings / vars
u_short const clientsPThread = 10;
size_t const MaxBuffSize;

class ClientHandler
{
	std::array<SOCKET, clientsPThread> ClientPool;
	u_short numClients = 0;

public:
	bool giveClient(SOCKET newSocket)
	{
		if (!this->handlerFull())
		{
			ClientPool.assign(newSocket);
			return true;
		}
		else
			return false;
	}

	bool handlerFull()
	{
		if (this->numClients >= clientsPThread)
			return true;
		else
			return false;
	}
};