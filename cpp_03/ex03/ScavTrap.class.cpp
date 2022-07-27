#include "ScavTrap.hpp"

//		CONSTRUCTORS AND DESTRUCTORS

ScavTrap::ScavTrap(void) : ClapTrap(){
	std::cout << "ScavTrap Deflault constructor called" << std::endl;
	hitPoints = 100;
	energyPoints = 50;
	attackDamage = 20;
	return ;
}

ScavTrap::ScavTrap(std::string const & name) : ClapTrap(name){
	std::cout << "ScavTrap Name constructor called" << std::endl;
	hitPoints = 100;
	energyPoints = 50;
	attackDamage = 20;
	return ;
}

ScavTrap::ScavTrap(ScavTrap const & src) : ClapTrap(src){
	std::cout << "ScavTrap Copy constructor called" << std::endl;
	*this = src;
	return ;
}

ScavTrap::~ScavTrap(){
	std::cout << "ScavTrap Destructor called" << std::endl;
	return ;
}

//		ASSIGNEMENT OPERATOR

ScavTrap const & ScavTrap::operator=(ScavTrap const & rhs){
	std::cout << "ScavTrap Assignement operator called" << std::endl;
	this->name = rhs.getName();
	this->hitPoints = rhs.getHitPoints();
	this->energyPoints = rhs.getEnergyPoints();
	this->attackDamage = rhs.getAttackDamage();
	return (*this);
}

//		ACTION MEMBER FUNCTIONS

void ScavTrap::attack(const std::string& target){
	if (hitPoints == 0 || energyPoints == 0){
		std::cout << "ScavTrap " << name << "'s Hit Points or Energy Points are down to 0, it can't attack anymore damage!" << std::endl;
		return ;
	}
	std::cout << "ScavTrap " << name << " attacks " << target << ", causing " << attackDamage << " points of damage!" << std::endl;
	--energyPoints;
	return ;
}

void	ScavTrap::guardGate() const{
	std::cout << "Scavtrap " << name << " entered in gate keeper mode!" << std::endl;
	return ;
}