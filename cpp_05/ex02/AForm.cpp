#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include <iostream>

//				CONSTRUCTORS AND DESTRUCTORS

AForm::AForm() : _name("default"), _isSigned(0), _gradeToSign(150), _gradeToExecute(150), _target("jardin"){
}

AForm::AForm(const std::string & name, const int & gradeToSign, const int & gradeToExecute, const std::string & target) : _name(name), _isSigned(0), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute), _target(target){
}

AForm::AForm(AForm const & src) : _name(src._name), _isSigned(src._isSigned), _gradeToSign(src._gradeToSign), _gradeToExecute(src._gradeToExecute){
	*this = src;
}

AForm::~AForm(){
}

//			ASSIGNMENT OPERATOR OVERLOADING

const AForm & AForm::operator=(const AForm & rhs){
	if (this == &rhs)
		return (*this);
	_isSigned = rhs._isSigned;
	_target = rhs._target;
	return (*this);
}

//			METHODS

void	AForm::beSigned(const Bureaucrat & bureaucrat){
	try {
		if (bureaucrat.getGrade() > _gradeToSign)
			throw AForm::GradeTooLowException;
		else if (_isSigned == 1)
			return ;
		_isSigned = 1;
	}
	catch (std::exception &e){
		std::cout << e.what() << std::endl;
	}
}

int		AForm::execute(Bureaucrat const & executor) const{
	try {
		if (executor.getGrade() > this->getGradeToExecute())
			throw AForm::GradeTooLowException;
		else if (this->getIsSigned() == 0)
			throw AForm::FormIsNotSignedException;
		executeTheForm();
		return (1);
	}
	catch (std::exception & e){
		std::cout << e.what() << std::endl;
	}
	return (0);
}

//			GETTERS

const std::string	AForm::getName() const{
	return (_name);
}

bool	AForm::getIsSigned() const{
	return (_isSigned);
}

int	AForm::getGradeToSign() const{
	return (_gradeToSign);
}

int	AForm::getGradeToExecute() const{
	return (_gradeToExecute);
}

std::string		AForm::getTarget() const{
	return (_target);
}

void			AForm::setTarget(const std::string & newTarget){
	_target = newTarget;
}

void			AForm::setIsSigned(bool isSigned){
	_isSigned = isSigned;
}

//			STREAM OVERLOADING

std::ostream & operator<<(std::ostream & output, const AForm & form){
	output << form.getName() << ", form grade to sign " << form.getGradeToSign() << " grade to execute " << form.getGradeToExecute() << ".";
	return (output);
}