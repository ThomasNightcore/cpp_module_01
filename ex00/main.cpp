
#include "Zombie.hpp"
#include <string>

// Function definitions
void randomChump(std::string name);
Zombie *newZombie(std::string name);

int main(void)
{
	randomChump("boo");
	randomChump("ba");

	Zombie *zombie1 = newZombie("Jeff");
	Zombie *zombie2 = newZombie("Fake Jeff");

	zombie1->announce();
	zombie2->announce();

	delete zombie1;
	delete zombie2;

	return 0;
}