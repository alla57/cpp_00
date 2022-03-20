#ifndef HUMAN_A_HPP
# define HUMAN_A_HPP

#include "Weapon.hpp"

class HumanA
{
public:
	HumanA(std::string name, Weapon& weapon);
	~HumanA();
	void attack() const;

private:
	std::string	name;
	Weapon* 	weapon;
};

#endif