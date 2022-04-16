#include <iostream>
#include "ClapTrap.hpp"

int main( void )
{
	ClapTrap a("julie");
	a.attack("noemie");
	a.takeDamage(8);
	a.beRepaired(12);
	a.takeDamage(80);
	a.beRepaired(12);
	return 0;
}