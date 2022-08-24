#include "AAnimal.hpp"

//		CONSTRUCTORS AND DESTRUCTORS

AAnimal::AAnimal(void) : type("AAnimal"){
	std::cout << "AAnimal Default constructor called" << std::endl;
	return ;
}

AAnimal::AAnimal(AAnimal const & src){
	std::cout << "AAnimal Copy constructor called" << std::endl;
	*this = src;
	return ;
}

AAnimal::~AAnimal(){
	std::cout << "AAnimal Default Destructor called" << std::endl;
	return ;
}

//			ASSIGNEMENT OPERATOR

AAnimal const & AAnimal::operator=(AAnimal const & rhs){
	this->type = rhs.getType();
	return (*this);
}

//		GETTERS

std::string const &	AAnimal::getType(void) const{
	return (type);
}
