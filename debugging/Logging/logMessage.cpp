#include "logMessage.h"
using namespace Debug;

LogMessage::LogMessage(string message, MessageType messageType)
{
	m_Message = message;
	m_messageType = messageType;
}
