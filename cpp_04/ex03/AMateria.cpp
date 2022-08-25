#include "AMateria.hpp"
#include <iostream>

//					CONSTRUCTORS

AMateria::AMateria(){
	std::cout << "AMateria Default constructor called" <<std::endl;
	return ;
}

AMateria::AMateria(std::string const & type) : type(type){
	std::cout << "AMateria " << type << " constructor called" << std::endl;
	return ;
}

AMateria::AMateria(const AMateria & src){
	std::cout << "AMateria copy constructor called" << std::endl;
	*this = src;
	return ;
}

AMateria::~AMateria(){
	std::cout << "AMateria destructor called" << std::endl;
	return ;
}

//			ASSIGNEMENT OPERATOR OVERLOADING
const AMateria &	AMateria::operator=(const AMateria & rhs){
	if (*this == rhs)
		return (*this);
	type = rhs.getType();
	return (*this);
}

//					METHODS

std::string const &	AMateria::getType() const
{
	return (type);
}
