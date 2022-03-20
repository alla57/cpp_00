#include "Weapon.hpp"

Weapon::Weapon(std::string type){
	this->type = type;
	return ;
}

Weapon::~Weapon(){
	return ;
}

const std::string&	Weapon::getType(void) const{
	const std::string& typeREF = this->type;
	return (typeREF);
}

void	Weapon::setType(std::string newType){
	this->type = newType;
	return ;
}
