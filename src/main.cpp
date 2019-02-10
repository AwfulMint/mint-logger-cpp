#include <iostream>
#include "include/logger.h"

int main()
{
	std::cout << "Test of Mint Logger v0.1" << std::endl;
	Logger logger("log1.log");

	logger.Log("Durr hurr", Logger::WARNING);
	logger.Log("Hurr durr", Logger::ERROR);
}
