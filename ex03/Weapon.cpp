#include <string>
#include "Weapon.hpp"

Weapon::~Weapon(void) {}
 
Weapon::Weapon(void) {}

Weapon::Weapon(std::string type)
{
	_type = type;
}

void Weapon::setType(std::string type)
{
	_type = type;
}

const std::string &Weapon::getType() const
{
	return _type;
}