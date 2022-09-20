#include "Form.hpp"
#include "Bureaucrat.hpp"
#include <iostream>

//				CONSTRUCTORS AND DESTRUCTORS

Form::Form() : _name("default"), _isSigned(0), _gradeToSign(150), _gradeToExecute(150){
	std::cout << "Form " << _name << " created with grade to sign " << _gradeToSign << " and with grade execute " << _gradeToExecute << "." << std::endl;
}

Form::Form(const std::string & name, const int & gradeToSign, const int & gradeToExecute) : _name(name), _isSigned(0), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute){
	if (_gradeToSign < 1)
		throw Form::GradeTooHighException;
	if (_gradeToSign > 150)
		throw Form::GradeTooLowException;
	std::cout << "Form " << name << " created with grade to sign " << _gradeToSign << " and with grade execute " << _gradeToExecute << "." << std::endl;
}

Form::Form(Form const & src) : _name(src._name), _isSigned(0), _gradeToSign(src._gradeToSign), _gradeToExecute(src._gradeToExecute){
	*this = src;
}

//			ASSIGNMENT OPERATOR OVERLOADING

const Form & Form::operator=(const Form & rhs){
	if (this == &rhs)
		return (*this);
	_isSigned = rhs._isSigned;
	return (*this);
}

//			METHODS

void	Form::beSigned(const Bureaucrat & bureaucrat){
	try {
		if (bureaucrat.getGrade() > _gradeToSign)
			throw Form::GradeTooLowException;
		else if (_isSigned == 1)
			return ;
		_isSigned = 1;
	}
	catch (std::exception &e){
		std::cout << e.what() << std::endl;
	}
}

//			GETTERS

const std::string	Form::getName() const{
	return (_name);
}

bool	Form::getIsSigned() const{
	return (_isSigned);
}

int	Form::getGradeToSign() const{
	return (_gradeToSign);
}

int	Form::getGradeToExecute() const{
	return (_gradeToExecute);
}

//			STREAM OVERLOADING

std::ostream & operator<<(std::ostream & output, const Form & form){
	output << form.getName() << ", form grade to sign " << form.getGradeToSign() << " grade to execute " << form.getGradeToExecute() << ".";
	return (output);
}