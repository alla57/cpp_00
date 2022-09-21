#include "RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp"
#include <iostream>
#include <cstdlib>
#include <ctime>

//				CONSTRUCTORS AND DESTRUCTORS

RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", 72, 45, "robotomyTarget"){
}

RobotomyRequestForm::RobotomyRequestForm(const std::string & target) : AForm("RobotomyRequestForm", 72, 45, target){
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & src) : AForm("RobotomyRequestForm", 72, 45, src.getTarget()){
	*this = src;
}

RobotomyRequestForm::~RobotomyRequestForm(){
}

//			ASSIGNMENT OPERATOR OVERLOADING

const RobotomyRequestForm & RobotomyRequestForm::operator=(const RobotomyRequestForm & rhs){
	if (this == &rhs)
		return (*this);
	setIsSigned(rhs.getIsSigned());
	setTarget(rhs.getTarget());
	return (*this);
}

//			METHODS

void	RobotomyRequestForm::executeTheForm() const{
	std::cout << "DRrrrrrr *Drilling noises*" << std::endl;
	srand(time(0));
	if (rand() % 2)
		std::cout << this->getTarget() << " has been robotomized successfully" << std::endl;
	else
	{
		std::cout << "robotomy failed" << std::endl;
		throw FailedToExecuteException;
	}
}