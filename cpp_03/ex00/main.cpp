#include <iostream>
#include "ClapTrap.hpp"

int main( void )
{
	ClapTrap a("julie");
	a.attack("noemie");
	a.takeDamage(8);
	a.beRepaired(10);
	a.beRepaired(1);
	a.takeDamage(80);
	a.beRepaired(12);
	return 0;
}