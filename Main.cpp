#include<iostream>
#include <vector>
#include <string>
#include "Acc.h"
#include "Chat.h"
#include "Server.h"
using namespace std;

Server* _server;

int main()
{
	//setlocale(LC_ALL, "ru_RU.UTF-8");

	_server = new Server();
	_server->MainProcess();
	/**/
	MessageContainer container;

	Message msg1("UserA", "UserB", "Привет, как дела?");
	Message msg2("UserB", "UserA", "Все хорошо, спасибо!");

	container.addMessage(msg1);
	container.addMessage(msg2);

	container.showAllMessages();

	return 0;
};


