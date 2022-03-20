#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon){
	this->name = name;
	this->weapon = &weapon;
	return ;
}

HumanA::~HumanA(){
	return ;
}

void HumanA::attack() const{
	std::cout << this->name << " Attack with " << this->weapon->getType() << std::endl;
	return ;
}