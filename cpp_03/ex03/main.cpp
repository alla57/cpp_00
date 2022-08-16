#include <iostream>
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main( void )
{
	DiamondTrap a("Karl");
	std::cout << a.getName() << " has " << a.getHitPoints() << " Hit Points, " << a.getEnergyPoints() << " Energy Points and " << a.getAttackDamage() << " attack damage !" << std::endl;
	a.whoAmI();
	return 0;
}