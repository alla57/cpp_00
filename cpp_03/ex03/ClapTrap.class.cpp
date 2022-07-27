#include "ClapTrap.hpp"

//		CONSTRUCTORS AND DESTRUCTORS

ClapTrap::ClapTrap(void) : name("default"), hitPoints(10), energyPoints(10), attackDamage(0){
	std::cout << "ClapTrap Default constructor called" << std::endl;
	return ;
}

ClapTrap::ClapTrap(std::string const & name) : name(name), hitPoints(10), energyPoints(10), attackDamage(0){
	std::cout << "ClapTrap Name constructor called" << std::endl;
	return ;
}

ClapTrap::ClapTrap(ClapTrap const & src){
	std::cout << "ClapTrap Copy constructor called" << std::endl;
	*this = src;
	return ;
}

ClapTrap::~ClapTrap(){
	std::cout << "ClapTrap Destructor called" << std::endl;
	return ;
}

//		ASSIGNEMENT OPERATOR

ClapTrap & ClapTrap::operator=(ClapTrap const & rhs){
	std::cout << "ClapTrap Assignement operator called!" << std::endl;
	this->name = rhs.getName();
	this->hitPoints = rhs.getHitPoints();
	this->energyPoints = rhs.getEnergyPoints();
	this->attackDamage = rhs.getAttackDamage();
	return (*this);
}

//			GETTERS

std::string		ClapTrap::getName() const{
	return (this->name);
}

unsigned int	ClapTrap::getHitPoints() const{
	return (this->energyPoints);
}

unsigned int	ClapTrap::getEnergyPoints() const{
	return (this->energyPoints);
}

unsigned int	ClapTrap::getAttackDamage() const{
	return (this->attackDamage);
}

//		ACTION MEMBER FUNCTIONS

void ClapTrap::attack(const std::string& target){
	if (hitPoints == 0 || energyPoints == 0){
		std::cout << "ClapTrap " << name << "'s Hit Points or Energy Points are down to 0, it can't attack anymore damage!" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << name << " attacks " << target << ", causing " << attackDamage << " points of damage!" << std::endl;
	--energyPoints;
	return ;
}

void ClapTrap::takeDamage(unsigned int amount){
	if (hitPoints == 0){
		std::cout << "ClapTrap " << name << "'s Hit Points are down to 0, it can't takes anymore damage!" << std::endl;
		return ;
	}
	if (amount > hitPoints)
		hitPoints = 0;
	else
		hitPoints -= amount;
	std::cout << "ClapTrap " << name << " takes " << amount << " points of damage and is now "<< hitPoints << " Hit Points!" << std::endl;
	return ;
}

void ClapTrap::beRepaired(unsigned int amount){
	if (hitPoints == 0 || energyPoints == 0){
		std::cout << "ClapTrap " << name << "'s Hit Points or Energy Points are down to 0, it can't be repaired anymore!" << std::endl;
		return ;
	}
	hitPoints += amount;
	std::cout << "ClapTrap " << name << " is being repared and it regains " << amount << " Hit Points " << "and is now " << hitPoints << " Hit Points!" << std::endl;
	--energyPoints;
	return ;
}
