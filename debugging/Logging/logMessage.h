#pragma once

#include <string>
using namespace std;

namespace Debug {

	enum MessageType
	{
		Info,
		Warning,
		Error
	};

	class LogMessage
	{
	private:
		string m_Message;
		MessageType m_messageType;

	public:
		LogMessage(string message, MessageType messageType);

		inline string Message()
		{
			return m_Message;
		}

		inline MessageType GetMessageType()
		{
			return m_messageType;
		}
	};
}