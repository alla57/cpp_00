#include "Character.hpp"
#include <iostream>

Character::Character() : _name("default"){
	std::cout << "Character default constructor called" << std::endl;
	return ;
}

Character::Character(const std::string & name) : _name(name){
	std::cout << "Character " << name << " constructor called" << std::endl;
	return ;
}

Character::Character(const Character & rhs){
	std::cout << "Character copy constructor called" << std::endl;
	*this = rhs;
	return ;
}

Character::~Character(){
	std::cout << "Character " << _name << " destructor called" << std::endl;
	return ;
}

Character const & Character::operator=(const Character & rhs){
}