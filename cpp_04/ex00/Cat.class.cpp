#include "Cat.hpp"

//		CONSTRUCTORS AND DESTRUCTORS

Cat::Cat(void) : Animal(){
	std::cout << "Cat Default constructor called" << std::endl;
	type = "Cat";
	return ;
}

Cat::Cat(Cat const & src) : Animal(){
	std::cout << "Cat Copy constructor called" << std::endl;
	*this = src;
	return ;
}

Cat::~Cat(){
	std::cout << "Cat Default Destructor called" << std::endl;
	return ;
}

//			ASSIGNEMENT OPERATOR

Cat const & Cat::operator=(Cat const & rhs){
	this->type = rhs.getType();
	return (*this);
}

//		ACTION FUNCTION MEMBER

void	Cat::makeSound(void) const{
	std::cout << "Miaou!" << std::endl;
	return ;
}

//		GETTERS

std::string const &	Cat::getType(void) const{
	return (type);
}
