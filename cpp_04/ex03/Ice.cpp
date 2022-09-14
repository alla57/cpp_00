#include "Ice.hpp"
#include <iostream>

//			CONSTRUCTORS

Ice::Ice() : AMateria("ice"){
	std::cout << "Ice default constructor called" << std::endl;
	return ;
}

Ice::Ice(Ice const & src) : AMateria("ice"){
	std::cout << "Ice copy constructor called" << std::endl;
	*this = src;
	return ;
}

Ice::~Ice(){
	std::cout << "Ice destructor called" << std::endl;
	return ;
}

Ice const & Ice::operator=(Ice const & rhs){
	if (this == &rhs)
		return (*this);
	type = rhs.getType();
	return (*this);
}

//			METHODS

AMateria*	Ice::clone() const
{
	return (new Ice(*this));
}

void	Ice::use(ICharacter& target) const
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
	return ;
}