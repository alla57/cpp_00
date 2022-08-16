#include "./DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap("default_clap_name"), ScavTrap(), FragTrap(), name("default"){
	std::cout << name << " DiamondTrap Default constructor called" << std::endl;
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 30;
	return ;
}

DiamondTrap::DiamondTrap(const std::string & name) : ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name), name(name){
	std::cout << name << " DiamondTrap Name constructor called" << std::endl;
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 30;
	return ;
}

DiamondTrap::DiamondTrap(const DiamondTrap & src) : ClapTrap(name + "_clap_name"), ScavTrap(), FragTrap(), name(src.getName()){
	std::cout << name << " DiamondTrap copy constructor called" << std::endl;
	*this = src;
	return ;
}

DiamondTrap::~DiamondTrap(){
	std::cout << name << " DiamondTrap destructor called" << std::endl;
	return ;
}

DiamondTrap & DiamondTrap::operator=(DiamondTrap const & rhs){
	std::cout << "DiamondTrap Assignement operator called!" << std::endl;
	ClapTrap::name = rhs.getName() + "_clap_name";
	this->name = rhs.getName();
	this->hitPoints = rhs.getHitPoints();
	this->energyPoints = rhs.getEnergyPoints();
	this->attackDamage = rhs.getAttackDamage();
	return (*this);
}

void		DiamondTrap::attack(const std::string& target)
{
	ScavTrap::attack(target);
	return ;
}

void		DiamondTrap::whoAmI() const
{
	std::cout << "My name is " << name << " and my ClapTrap name is " << ClapTrap::name << std::endl;
	return ;
}
