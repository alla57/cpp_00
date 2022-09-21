#include "ShrubberyCreationForm.hpp"
#include <iostream>
#include <fstream>

//				CONSTRUCTORS AND DESTRUCTORS

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", 145, 137, "jardin"){
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string & target) : AForm("ShrubberyCreationForm", 145, 137, target){
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & src) : AForm("ShrubberyCreationForm", 145, 137, src.getTarget()){
	*this = src;
}

ShrubberyCreationForm::~ShrubberyCreationForm(){
}

//			ASSIGNMENT OPERATOR OVERLOADING

const ShrubberyCreationForm & ShrubberyCreationForm::operator=(const ShrubberyCreationForm & rhs){
	if (this == &rhs)
		return (*this);
	setIsSigned(rhs.getIsSigned());
	setTarget(rhs.getTarget());
	return (*this);
}

//			METHODS

void	ShrubberyCreationForm::executeTheForm() const{
	std::ofstream	targetOutfile(this->getTarget(), std::ofstream::trunc);
	targetOutfile << std::endl <<
"       _-_" << std::endl <<
"    /~~   ~~\\" << std::endl <<
" /~~         ~~\\" << std::endl <<
"{               }" << std::endl <<
" \\  _-     -_  /" << std::endl <<
"   ~  \\\\ //  ~" << std::endl <<
"_- -   | | _- _" << std::endl <<
"  _ -  | |   -_" << std::endl <<
"      // \\\\" << std::endl;
	targetOutfile.close();
}