#include "stdio.h"
 #include <unistd.h>
#include <log4cplus/logger.h>
#include <log4cplus/loggingmacros.h>
#include <log4cplus/helpers/loglog.h>
#include <log4cplus/helpers/stringhelper.h>
#include <log4cplus/configurator.h>


using namespace log4cplus;
int main(int argc, char* argv[]) 
{
	PropertyConfigurator::doConfigure(LOG4CPLUS_TEXT("log.conf"));
	
	auto log = Logger::getInstance(LOG4CPLUS_TEXT("DEBUG_LOGGER"));
	LOG4CPLUS_DEBUG_FMT(log, "start");
	while(1)
	{
	    LOG4CPLUS_DEBUG_FMT(log, "k");
		sleep(1*60*60);//hour
		
	}
	return 0;
}

