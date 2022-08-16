#ifndef DIAMOND_TRAP_HPP
# define DIAMOND_TRAP_HPP

# include "./FragTrap.hpp"
# include "./ScavTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
public:
	DiamondTrap(void);
	DiamondTrap(const std::string & name);
	DiamondTrap(const DiamondTrap & src);
	~DiamondTrap();

	DiamondTrap & operator=(DiamondTrap const & rhs);

	void attack(const std::string& target);
	void whoAmI() const;

private:
	std::string name;
};

#endif