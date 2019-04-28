#include "loggingManager.h"
#include "spdlog/sinks/stdout_color_sinks.h"
using namespace Debug;
using namespace spdlog;

LoggingManager::LoggingManager()
{
	m_ConsoleLogger = stdout_color_mt("CONSOLE");
	m_FileLogger = stdout_color_mt("FILE");

	m_ConsoleLogger->set_level(level::trace);
	m_FileLogger->set_level(level::trace);
}

void LoggingManager::LogMessage(Debug::LogMessage message)
{
	string msg = message.Message();

	switch (message.GetMessageType())
	{
	case MessageType::Info:
		LogInfo(msg);
		break;
	case MessageType::Warning:
		LogWarning(msg);
		break;
	case MessageType::Error:
		LogError(msg);
		break;
	}
}

void LoggingManager::LogInfo(string info)
{
	m_ConsoleLogger->info(info);
}

void LoggingManager::LogWarning(string warning)
{
	m_ConsoleLogger->warn(warning);
}

void LoggingManager::LogError(string error)
{
	m_ConsoleLogger->error(error);
}






