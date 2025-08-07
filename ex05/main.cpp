#include <string>
#include <iostream>

#include "Harl.hpp"
#include <string>

int main(void)
{
	Harl harl;

	std::string complaints[] = { 
		"ERROR", 
		"INFO", 
		"WARNING", 
		"DEBUG", 
		"INFO", 
		"WARNING", 
		"ERROR", 
		"INFO", 
		"DEBUG", 
		"WARNING", 
		"ERROR", 
		"WARNING", 
		"DEBUG", 
		"INFO", 
		"INFO", 
		"WARNING", 
		"ERROR", 
		"WARNING", 
		"ERROR", 
		"INFO", 
		"DEBUG", 
		"DEBUG", 
		"WARNING", 
	};

	const static int complaintsCount = 23;
	for (int i = 0; i < complaintsCount; i++)
	{
		harl.complain(complaints[i]);
	}
}
