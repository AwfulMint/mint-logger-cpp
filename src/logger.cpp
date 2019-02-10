#include "include/logger.h"
#include <iostream>
#include <fstream>

Logger::Logger(const char* logfilename)
{
	m_LogFile = std::ofstream(logfilename);
}

Logger::~Logger()
{
	m_LogFile.close();
}

void Logger::Log(const char* message, Level level)
{
	if(level == 0)
	{
		std::cout << "[WARNING]:> " << message << std::endl;
		m_LogFile << "[WARNING]:> " << message << std::endl;
	}
	else if(level == 1)
	{
		std::cout << "[ERROR]:> " << message << std::endl;
		m_LogFile << "[ERROR]:> " << message << std::endl;
	}
}
