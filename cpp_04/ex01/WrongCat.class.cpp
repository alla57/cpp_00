#include "WrongCat.hpp"

//		CONSTRUCTORS AND DESTRUCTORS

WrongCat::WrongCat(void) : WrongAnimal(){
	std::cout << "WrongCat Default constructor called" << std::endl;
	type = "WrongCat";
	return ;
}

WrongCat::WrongCat(WrongCat const & src) : WrongAnimal(){
	std::cout << "WrongCat Copy constructor called" << std::endl;
	*this = src;
	return ;
}

WrongCat::~WrongCat(){
	std::cout << "WrongCat Default Destructor called" << std::endl;
	return ;
}

//			ASSIGNEMENT OPERATOR

WrongCat const & WrongCat::operator=(WrongCat const & rhs){
	this->type = rhs.getType();
	return (*this);
}

//		ACTION FUNCTION MEMBER

void	WrongCat::makeSound(void) const{
	std::cout << "Wrong Miaou!" << std::endl;
	return ;
}

//		GETTERS

std::string const &	WrongCat::getType(void) const{
	return (type);
}
