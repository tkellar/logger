#pragma once

#include <stdio.h>
#include "string.h"
#include "LoggerConfig.hpp"

#define Log(level, f, args...) \
      { \
      if ( LoggerConfig::MinimumLogLevel <= level ) \
         { \
         if (!LoggerConfig::PrintFileName) \
            printf("[%s] " f "\n", GetLogLevelAsString(level), ##args); \
         else if (LoggerConfig::PrintFileName && !LoggerConfig::PrintLineNumber) \
            printf("[%s](%s) " f "\n", GetLogLevelAsString(level), __FILE__, ##args); \
         else if (LoggerConfig::PrintFileName && LoggerConfig::PrintLineNumber) \
            printf("[%s](%s:%d) " f "\n", GetLogLevelAsString(level), __FILE__, __LINE__, ##args); \
         } \
      } \

#define LogVerbose(f, args...) { Log( LogLevel::Verbose, f, ##args ); }

#define LogDebug(f, args...) { Log( LogLevel::Debug, f, ##args ); }

#define LogInformation(f, args...) { Log( LogLevel::Information, f, ##args ); }

#define LogWarning(f, args...) { Log( LogLevel::Warning, f, ##args ); }

#define LogError(f, args...) { Log( LogLevel::Error, f, ##args ); }

#define LogFatal(f, args...) { Log( LogLevel::Fatal, f, ##args ); }
