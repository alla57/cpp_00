#include <iostream>
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

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
	std::cout << std::endl;
	FragTrap d("samir");
	FragTrap e(d);
	d.attack("eric");
	e.attack("sarah");
	d.highFivesGuys();
	d.takeDamage(5);
	e.takeDamage(500);
	d.beRepaired(8);
	e.beRepaired(8);
	return 0;
}