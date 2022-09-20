#include "ShrubberyCreationForm.hpp"
#include <iostream>
#include <fstream>

//				CONSTRUCTORS AND DESTRUCTORS

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", 145, 137, "jardin"){
	// std::cout << "Form " << _name << " created with grade to sign " << _gradeToSign << " and with grade execute " << _gradeToExecute << "." << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string & target) : AForm("ShrubberyCreationForm", 145, 137, target){
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & src) : AForm("ShrubberyCreationForm", 145, 137, src.getTarget()){
	*this = src;
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

// void	ShrubberyCreationForm::beSigned(const Bureaucrat & bureaucrat){
// 	try {
// 		if (bureaucrat.getGrade() > _gradeToSign)
// 			throw AForm::GradeTooLowException;
// 		else if (_isSigned == 1)
// 			return ;
// 		_isSigned = 1;
// 	}
// 	catch (std::exception &e){
// 		std::cout << e.what() << std::endl;
// 	}
// }

void	ShrubberyCreationForm::executeTheForm() const{
	std::ofstream	targetOutfile(this->getTarget());
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