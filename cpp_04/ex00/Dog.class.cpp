#include "Dog.hpp"

//		CONSTRUCTORS AND DESTRUCTORS

Dog::Dog(void) : Animal(){
	std::cout << "Dog Default constructor called" << std::endl;
	type = "Dog";
	return ;
}

Dog::Dog(Dog const & src) : Animal(){
	std::cout << "Dog Copy constructor called" << std::endl;
	*this = src;
	return ;
}

Dog::~Dog(){
	std::cout << "Dog Default Destructor called" << std::endl;
	return ;
}

//			ASSIGNEMENT OPERATOR

Dog const & Dog::operator=(Dog const & rhs){
	this->type = rhs.getType();
	return (*this);
}

//		ACTION FUNCTION MEMBER

void	Dog::makeSound(void) const{
	std::cout << "Waouf!" << std::endl;
	return ;
}

//		GETTERS

std::string const &	Dog::getType(void) const{
	return (type);
}
