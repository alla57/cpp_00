#include "Ice.hpp"
#include <iostream>

//			CONSTRUCTORS

Cure::Cure() : AMateria("cure"){
	std::cout << "Cure default constructor called" << std::endl;
	return ;
}

Cure::Cure(Cure const & src) : AMateria("cure"){
	std::cout << "Cure copy constructor called" << std::endl;
	*this = src;
	return ;
}

Cure::~Cure(){
	std::cout << "Cure destructor called" << std::endl;
	return ;
}

Cure const & Cure::operator=(Cure const & rhs){
	if (this == &rhs)
		return (*this);
	return (*this);
}

//			METHODS

AMateria*	Cure::clone() const
{
	return (new Cure);
}

void	Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << " wounds *" << std::endl;
	return ;
}