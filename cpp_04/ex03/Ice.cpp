#include "Ice.hpp"
#include <iostream>

//			CONSTRUCTORS

Ice::Ice() : type("ice"), AMateria(type){
	std::cout << "Ice default constructor called" << std::endl;
	return ;
}

Ice::Ice(Ice const & src) : AMateria(src.getType()){
	std::cout << "Ice copy constructor called" << std::endl;
	return ;
}

Ice::~Ice(){
	std::cout << "Ice destructor called" << std::endl;
	return ;
}

Ice const & Ice::operator=(Ice const & rhs){
}

//			METHODS

AMateria*	Ice::clone() const
{
	//
}

void	Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
	return ;
}