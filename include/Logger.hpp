#pragma once

#include <stdio.h>
#include "LoggerConfig.hpp"

#define LogVerbose(f, args...) \
      { \
      if ( LoggerConfig::MinimumLogLevel <= LogLevel::Verbose ) \
         printf( "[Verbose] " f, ##args ); \
      } \

#define LogDebug(f, args...) \
      { \
      if ( LoggerConfig::MinimumLogLevel <= LogLevel::Debug ) \
         printf( "[Debug] " f "\n", ##args ); \
      } \

#define LogInformation(f, args...) \
      { \
      if ( LoggerConfig::MinimumLogLevel <= LogLevel::Information ) \
         printf( "[Information] " f "\n", ##args ); \
      } \

#define LogWarning(f, args...) \
      { \
      if ( LoggerConfig::MinimumLogLevel <= LogLevel::Warning ) \
         printf( "[Warning] " f "\n", ##args); \
      } \

#define LogError(f, args...) \
      { \
      if ( LoggerConfig::MinimumLogLevel <= LogLevel::Error ) \
         printf( "[Error] " f "\n", ##args ); \
      } \

#define LogFatal(f, args...) \
      { \
      if ( LoggerConfig::MinimumLogLevel <= LogLevel::Fatal ) \
         printf( "[Fatal] " f "\n", ##args); \
      } \
