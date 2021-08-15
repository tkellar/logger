#include "Logger.hpp"
#include "LoggerConfig.hpp"

/* -------------------------------------------------------------------------- */
/*                                    USAGE                                   */
/* -------------------------------------------------------------------------- */

int main()
   {
   LogInformation( "Default log level is 'Information'" );
   LogVerbose( "This won't print!" );

   LogInformation( "Use LoggerConfig to change the MinimumLogLevel" );
   LoggerConfig::MinimumLogLevel = LogLevel::Verbose;
   LogVerbose( "Now you can see me!" );

   LogInformation( "You can also log messages in printf style" );
   LogDebug( "Attempting to do operation..." );
   LogError( "Uh oh! Got an error code: %d", -1 );

   LogInformation( "Use other config settings to print..." );
   LoggerConfig::PrintFileName = true;
   LogInformation( "Logs with the file name!" );
   LoggerConfig::PrintLineNumber = true;
   LogInformation( "Logs with file name and line number!" );

   return 0;
   }