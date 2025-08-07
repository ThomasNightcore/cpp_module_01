#include <string>
#include <iostream>

#include "Harl.hpp"
#include <string>

enum e_debugState
{
	DEBUG = 0,
	INFO = 1,
	WARNING = 2,
	ERROR = 3,
	NONE = 4
};

bool hasGoodInput(int argc)
{
	if (argc == 1)
	{
		std::cout << "Harl doesn't like if you have nothing to say! Please provide an argument." << std::endl;
		return false;
	}
	if (argc != 2)
	{
		std::cout << "Harl doesn't like if you too much to say! Please provide only one argument." << std::endl;
		return false;
	}

	return true;
}

e_debugState getDebugState(const std::string &arg)
{
	const static int arrAmount = 4;
	std::string strArr[arrAmount] = { 
		"DEBUG", 
		"INFO", 
		"WARNING", 
		"ERROR" 
	};
	int index = 0;
	for (; index < arrAmount; index++)
	{
		if (arg == strArr[index])
			break;
	}

	bool state = index < arrAmount;
	if (!state)
	{
		return NONE;
	}
	return (e_debugState)index;
}

int main(int argc, char **argv)
{
	if (!hasGoodInput(argc))
		return 0;

	Harl harl;
	e_debugState state = getDebugState(argv[1]);

	switch (state)
	{
		case NONE:
		{
			std::cout << "Harl is not happy with your input. Give him either DEBUG, INFO, WARING or ERROR!" << std::endl;
			break;
		}
		case DEBUG:
		{
			std::cout << "[DEBUG]" << std::endl;
			harl.complain("DEBUG");
			std::cout << std::endl;
		}
		case INFO:
		{
			std::cout << "[INFO]" << std::endl;
			harl.complain("INFO");
			std::cout << std::endl;
		}
		case WARNING:
		{
			std::cout << "[WARNING]" << std::endl;
			harl.complain("WARNING");
			std::cout << std::endl;
		}
		case ERROR:
		{
			std::cout << "[ERROR]" << std::endl;
			harl.complain("ERROR");
			std::cout << std::endl;
		}
	}
}
