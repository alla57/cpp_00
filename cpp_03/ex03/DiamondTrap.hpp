#ifndef DIAMOND_TRAP_HPP
# define DIAMOND_TRAP_HPP

# include "./FragTrap.hpp"
# include "./ScavTrap.hpp"

class DiamondTrap
{
public:
	DiamondTrap(void);
	DiamondTrap(const string & name);
	DiamondTrap(const DiamondTrap & src);
	~DiamondTrap();

	DiamondTrap & operator=(DiamondTrap const & rhs);

	ClapTrap::name;
private:
	std::string name;
}

#endif