#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : public virtual ClapTrap
{
public:
	ScavTrap(void);
	ScavTrap(std::string const & name);
	ScavTrap(ScavTrap const & src);
	~ScavTrap();

	ScavTrap const & operator=(ScavTrap const & rhs);

	void attack(const std::string& target);
	void guardGate() const;
};

#endif