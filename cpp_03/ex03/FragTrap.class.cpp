#include "FragTrap.hpp"

//		CONSTRUCTORS AND DESTRUCTORS

FragTrap::FragTrap(void) : ClapTrap(){
	std::cout << "FragTrap Default constructor called" << std::endl;
	hitPoints = 100;
	energyPoints = 100;
	attackDamage = 30;
	return ;
}

FragTrap::FragTrap(std::string const & name) : ClapTrap(name){
	std::cout << "FragTrap Name constructor called" << std::endl;
	hitPoints = 100;
	energyPoints = 100;
	attackDamage = 30;
	return ;
}

FragTrap::FragTrap(FragTrap const & src) : ClapTrap(src){
	std::cout << "FragTrap Copy constructor called" << std::endl;
	*this = src;
	return ;
}

FragTrap::~FragTrap(){
	std::cout << "FragTrap Default destructor called" << std::endl;
	return ;
}

//		ASSIGNEMENT OPERATOR

FragTrap const & FragTrap::operator=(FragTrap const & rhs){
	std::cout << "FragTrap Assignement operator called" << std::endl;
	this->name = rhs.getName();
	this->hitPoints = rhs.getHitPoints();
	this->energyPoints = rhs.getEnergyPoints();
	this->attackDamage = rhs.getAttackDamage();
	return (*this);
}

//		ACTION MEMBER FUNCTIONS

void FragTrap::highFivesGuys(void){
	std::cout << "Let's High Five guys!" << std::endl;
	return ;
}
