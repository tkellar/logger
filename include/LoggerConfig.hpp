#pragma once

#include "LogLevel.hpp"

class LoggerConfig
   {
   public:
      static LogLevel MinimumLogLevel;
      static bool PrintFileName;
      static bool PrintLineNumber;
   };

LogLevel LoggerConfig::MinimumLogLevel = LogLevel::Information;
bool LoggerConfig::PrintFileName = false;
bool LoggerConfig::PrintLineNumber = false;
