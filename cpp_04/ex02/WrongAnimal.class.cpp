#include "WrongAnimal.hpp"

//		CONSTRUCTORS AND DESTRUCTORS

WrongAnimal::WrongAnimal(void) : type("WrongAnimal"){
	std::cout << "WrongAnimal Default constructor called" << std::endl;
	return ;
}

WrongAnimal::WrongAnimal(WrongAnimal const & src){
	std::cout << "WrongAnimal Copy constructor called" << std::endl;
	*this = src;
	return ;
}

WrongAnimal::~WrongAnimal(){
	std::cout << "WrongAnimal Default Destructor called" << std::endl;
	return ;
}

//			ASSIGNEMENT OPERATOR

WrongAnimal const & WrongAnimal::operator=(WrongAnimal const & rhs){
	this->type = rhs.getType();
	return (*this);
}

//		ACTION FUNCTION MEMBER

void	WrongAnimal::makeSound(void) const{
	std::cout << "Wrong Animal sound!" << std::endl;
	return ;
}

//		GETTERS

std::string const &	WrongAnimal::getType(void) const{
	return (type);
}
