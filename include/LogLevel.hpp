#pragma once

enum LogLevel : int
   {
   Verbose,
   Debug,
   Information,
   Warning,
   Error,
   Fatal
   };

const char* GetLogLevelAsString( LogLevel level )
   {
   switch ( level )
      {
      case Verbose:
         return "Verbose";
      case Debug:
         return "Debug";
      case Information:
         return "Information";
      case Warning:
         return "Warning";
      case Error:
         return "Error";
      case Fatal:
         return "Fatal";
      }
   }