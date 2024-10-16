#pragma once
#include <iostream>
#include <string>
#include <ctime>
#include <vector>

using namespace std;

class Message
{
   string _userFrom, _userTo, _text;
   time_t _now;

public:
   Message(string userFrom, string userTo, string text);
   void Show() const;
   string getUserTo();
   string getUserFrom();
   ~Message();
};

class MessageContainer
{
private:
   vector<Message> messages;

public:
   void addMessage(const Message& msg);
   void showAllMessages();
};