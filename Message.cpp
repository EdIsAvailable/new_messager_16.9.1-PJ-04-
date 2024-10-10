#include "Message.h"

#pragma warning(disable : 4996)

Message::Message(string userFrom, string userTo, string text) : _userFrom(userFrom), _userTo(userTo), _text(text)
{
   _now = time(NULL);
}

void Message::Show() const
{
   struct tm* t_m = localtime(&_now);
   string dateSent = " " + std::to_string(t_m->tm_mday) + "-" + std::to_string(t_m->tm_mon + 1) + "-" + std::to_string(t_m->tm_year + 1900) +
      " " + std::to_string(t_m->tm_hour) + ":" + std::to_string(t_m->tm_min) + ":" + std::to_string(t_m->tm_sec);
   cout << "Содержимое: " << _text << " отправитель: " << _userFrom << " получатель: " << _userTo << " отправлено: " << dateSent << endl;
}

string Message::getUserTo()
{
   return _userTo;
}

string Message::getUserFrom()
{
   return _userFrom;
}

Message::~Message()
{
}

// Реализация класса MessageContainer
void MessageContainer::addMessage(const Message& msg)
{
   messages.push_back(msg);
}

void MessageContainer::showAllMessages()
{
   for (const auto& msg : messages)
   {
      msg.Show();
   }
}