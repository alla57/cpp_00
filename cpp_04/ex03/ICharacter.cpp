#include "ICharacter.hpp"
#include <iostream>

ICharacter::~ICharacter(){
	std::cout << "ICharacter destructor called" << std::endl;
	return ;
}
