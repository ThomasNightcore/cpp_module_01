
#ifndef __ZOMBIE_H__
# define __ZOMBIE_H__

# include <string>

class Zombie 
{
	public:
		Zombie(void);
		Zombie(std::string name);
		~Zombie(void);
		void announce(void) const;
		void setName(std::string name);

	private:
		std::string _name;
};

#endif