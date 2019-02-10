#pragma once
#include <fstream>

class Logger
{
	private:
		std::ofstream m_LogFile;

	public:
		enum Level {
			WARNING, ERROR
		};

	public:
		Logger(const char* logfilename);
		~Logger();
		void Log(const char* message, Level level);
};
