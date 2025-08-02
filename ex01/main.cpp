
#include "Zombie.hpp"
#include <string>
#include <iostream>

Zombie* zombieHorde(int N, std::string name);

int main(void)
{
	int count = 5;
	Zombie *horde = zombieHorde(count, "Jeff");

	for (int i = 0; i < count; i++)
	{
		std::cout << "[index " << i << "] ";
		horde[i].announce();
	}
	delete[] horde;

	count = 1;
	horde = zombieHorde(count, "Single");
	horde->announce();
	delete[] horde;

	return 0;
}