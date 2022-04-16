#include <iostream>
#include "ScavTrap.hpp"

int main( void )
{
	ClapTrap a("julie");
	a.attack("noemie");
	a.takeDamage(8);
	a.beRepaired(12);
	a.takeDamage(80);
	a.beRepaired(12);
	std::cout << std::endl;
	ScavTrap b("julien");
	ScavTrap c(b);
	c.attack("julie");
	b.attack("alfred");
	c.takeDamage(5);
	b.takeDamage(500);
	c.beRepaired(8);
	b.beRepaired(8);
	return 0;
}