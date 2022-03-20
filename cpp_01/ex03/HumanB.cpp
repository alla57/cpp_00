#include "HumanB.hpp"

HumanB::HumanB(std::string name){
	this->name = name;
	return ;
}

HumanB::~HumanB(){
	return ;
}

void HumanB::attack() const{
	std::cout << this->name << " Attack with " << this->weapon->getType() << std::endl;
	return ;
}

void HumanB::setWeapon(Weapon& weapon){
	this->weapon = &weapon;
	return ;
}
