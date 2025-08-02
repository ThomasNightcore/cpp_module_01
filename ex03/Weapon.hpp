
#ifndef __WEAPON_HPP__
# define __WEAPON_HPP__

# include <string>

class Weapon
{
	private:
		std::string _type;
	public:
		Weapon(std::string type);
		Weapon(void);
		~Weapon(void);
		const std::string &getType() const;
		void setType(std::string type);
};


#endif