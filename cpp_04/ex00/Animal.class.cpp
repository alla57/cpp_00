#include "Animal.hpp"

//		CONSTRUCTORS AND DESTRUCTORS

Animal::Animal(void) : type("Animal"){
	std::cout << "Animal Default constructor called" << std::endl;
	return ;
}

Animal::Animal(Animal const & src){
	std::cout << "Animal Copy constructor called" << std::endl;
	*this = src;
	return ;
}

Animal::~Animal(){
	std::cout << "Animal Default Destructor called" << std::endl;
	return ;
}

//			ASSIGNEMENT OPERATOR

Animal const & Animal::operator=(Animal const & rhs){
	this->type = rhs.getType();
	return (*this);
}

//		ACTION FUNCTION MEMBER

void	Animal::makeSound(void) const{
	std::cout << "Animal sound!" << std::endl;
	return ;
}

//		GETTERS

std::string const &	Animal::getType(void) const{
	return (type);
}
