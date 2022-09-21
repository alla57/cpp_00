#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"
#include <iostream>
#include <cstdlib>
#include <ctime>

//				CONSTRUCTORS AND DESTRUCTORS

PresidentialPardonForm::PresidentialPardonForm() : AForm("PresidentialPardonForm", 25, 5, "PresidentialPardonTarget"){
}

PresidentialPardonForm::PresidentialPardonForm(const std::string & target) : AForm("PresidentialPardonForm", 25, 5, target){
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & src) : AForm("PresidentialPardonForm", 25, 5, src.getTarget()){
	*this = src;
}

PresidentialPardonForm::~PresidentialPardonForm(){
}

//			ASSIGNMENT OPERATOR OVERLOADING

const PresidentialPardonForm & PresidentialPardonForm::operator=(const PresidentialPardonForm & rhs){
	if (this == &rhs)
		return (*this);
	setIsSigned(rhs.getIsSigned());
	setTarget(rhs.getTarget());
	return (*this);
}

//			METHODS

void	PresidentialPardonForm::executeTheForm() const{
	std::cout << this->getTarget() << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}