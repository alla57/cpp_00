#include "Bureaucrat.hpp"
#include <exception>
#include <iostream>
#include "AForm.hpp"

// 			CONSTRUCTORS AND DESTRUCTOR

Bureaucrat::Bureaucrat() : _name("default"), _grade(150){
	std::cout << "Bureaucrat " << _name << " constructed" << std::endl;
	return ;
}

Bureaucrat::Bureaucrat(const std::string & name, const int & grade) try : _name(name), _grade(grade){
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	std::cout << "Bureaucrat " << _name << " created with grade " << _grade << std::endl;
	return ;
}
catch (int){
	std::cout << "bureaucrat initialization aborted" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat & src) : _name(src.getName()){
	std::cout << "Bureaucrat "<< _name << " copy constructed" << std::endl;
	*this = src;
	return ;
}

Bureaucrat::~Bureaucrat(){
	std::cout << "Bureaucrat " << _name << " destructed" << std::endl;
	return ;
}

// 			ASSIGNMENT OPERATOR OVERLOAD

const Bureaucrat &	Bureaucrat::operator=(const Bureaucrat & rhs){
	std::cout << "assignment operator" << std::endl;
	if (this == &rhs)
		return (*this);
	_grade = rhs.getGrade();
	return (*this);
}

// 			GETTERS

const std::string &	Bureaucrat::getName() const{
	return (_name);
}

const int &			Bureaucrat::getGrade() const{
	return (_grade);
}

// 			METHODS

void	Bureaucrat::incrementGrade(){
	try{
		if (_grade == 1)
			throw Bureaucrat::GradeTooHighException();
		--_grade;
	}
	catch (int){
	}
}

void	Bureaucrat::decrementGrade(){
	try{
		if (_grade == 150)
			throw Bureaucrat::GradeTooLowException();
		++_grade;
	}
	catch (int){
	}
}

int	Bureaucrat::GradeTooHighException(){
	std::cout << "Error : grade is too high" << std::endl;
	return 0;
}

int	Bureaucrat::GradeTooLowException(){
	std::cout << "Error : grade is too low" << std::endl;
	return 0;
}

void	Bureaucrat::signForm(AForm & form){
	if (form.getGradeToSign() < _grade)
		std::cout << _name << " couldn’t sign " << form.getName() << " because bureaucrat's grade is too low" << std::endl;
	else if (form.getIsSigned() == 1)
		std::cout << _name << " couldn’t sign " << form.getName() << " because the form is already signed" << std::endl;
	else
	{
		form.beSigned(*this);
		std::cout << _name << " signed " << form.getName() << std::endl;
	}
}

void	Bureaucrat::executeForm(AForm const & form){
	try{
		form.execute(*this);
		std::cout << _name << " executed " << form.getName() << std::endl;
	}
	catch (std::exception & e){
		std::cout << e.what() << std::endl;
	}
}

//			STREAM OVERLOADING

std::ostream & operator<<(std::ostream & output, const Bureaucrat & bureaucrat){
	output << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade() << ".";
	return (output);
}