#pragma once

#include <memory>
#include "logMessage.h"
#include <string>
#include "3rdPartyLibraries/spdlog/include/spdlog/logger.h"

using namespace std;
using namespace spdlog;

namespace Debug {

	class LoggingManager
	{
	
	private:
		 shared_ptr<logger> m_ConsoleLogger;
		 shared_ptr<logger> m_FileLogger;

	public:
		LoggingManager();
		void LogMessage(LogMessage);
		void LogError(string);
		void LogInfo(string);
		void LogWarning(string);
		void SetLoggingPattern(string);
	};

}
