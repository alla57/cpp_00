#include "Zombie.hpp"

Zombie::Zombie(std::string name){
	this->name = name;
	std::cout << name << " Zombie has been created" << std::endl;
	return ;
}

Zombie::~Zombie(void){
	std::cout << this->name << " Zombie has been destructed" << std::endl;
	return ;
}

void	Zombie::annonce(void) const{
	std::cout << this->name << ": " << "BraiiiiiiinnnzzzZ..." << std::endl;
	return ;
}
