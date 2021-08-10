#pragma once

#include "LogLevel.hpp"

class LoggerConfig
   {
   public:
      static LogLevel MinimumLogLevel;
      static bool PrintLogLevel;
      static bool PrintFileName;
      static bool PrintLineNumber;
   };

LogLevel LoggerConfig::MinimumLogLevel = LogLevel::Information;
bool LoggerConfig::PrintLogLevel = true;
bool LoggerConfig::PrintFileName = false;
bool LoggerConfig::PrintLineNumber = false;
