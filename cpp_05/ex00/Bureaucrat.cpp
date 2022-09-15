#include "Bureaucrat.hpp"
#include <iostream>

// 			CONSTRUCTORS AND DESTRUCTORS

Bureaucrat::Bureaucrat() : _name("default"), _grade(150){
	std::cout << "Bureaucrat " << _name << " constructed" << std::endl;
	return ;
}

Bureaucrat::Bureaucrat(const std::string & name, const int & grade) : _name(name){
	std::cout << "Bureaucrat " << _name << " created with grade " << _grade << std::endl;
	return ;
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
	return (*this);
}

// 			GETTERS

const std::string &	getName() const{
	return (_name);
}

const int &			getGrade() const{
	return (_grade);
}

// 			METHODS

void	Bureaucrat::incrementGrade(){
	if (_grade > 1)
		--_grade;
}

void	Bureaucrat::decrementGrade(){
	if (_grade < 150)
		++_grade;
}
