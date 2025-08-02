
#include <string>
#include <iostream>
#include "HumanB.hpp"

HumanB::~HumanB() {}

HumanB::HumanB(void){}

HumanB::HumanB(std::string name)
{
	_name = name;
}

void HumanB::attack() const
{
	std::cout << _name << " attacks with their " << _weapon.getType() << std::endl;
}

void HumanB::setWeapon(Weapon &weapon)
{
	_weapon = weapon;
}