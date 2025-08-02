
#ifndef __HUMAN_A_HPP__
# define __HUMAN_A_HPP__

# include <string>
# include "Weapon.hpp"

class HumanA
{
	public:
	 	HumanA(std::string name, Weapon &weapon);
		HumanA(void);
		~HumanA(void);
		void attack(void) const;
		void setWeapon(Weapon &weapon);
	private:
		std::string _name;
		Weapon _weapon;
};

#endif