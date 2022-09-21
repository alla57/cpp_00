#include "Intern.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

Intern::Intern(){
}

Intern::Intern(Intern const & src){
	*this = src;
}

Intern::~Intern(){
}

const Intern & Intern::operator=(const Intern & rhs){
	if (this == &rhs)
		return (*this);
	return (*this);
}

AForm*	Intern::makeShrubberyCreationForm(const std::string & target){
	std::cout << "Intern creates shrubbery form" << std::endl;
	return (new ShrubberyCreationForm(target));
}
AForm*	Intern::makeRobotomyRequestForm(const std::string & target){
	std::cout << "Intern creates robotomy form" << std::endl;
	return (new RobotomyRequestForm(target));
}
AForm*	Intern::makePresidentialPardonForm(const std::string & target){
	std::cout << "Intern creates presidential pardon form" << std::endl;
	return (new PresidentialPardonForm(target));
}

AForm*	Intern::makeForm(const std::string & nameOfForm, const std::string & target){
	AForm* form = NULL;
	std::string formTab[] = {"shrubbery creation", "robotomy request", "presidential pardon"};
	AForm* (Intern::*formMakers[])(const std::string &) = {&Intern::makeShrubberyCreationForm, &Intern::makeRobotomyRequestForm, &Intern::makePresidentialPardonForm};

	for (int i = 0; i < 3; i++)
	{
		if (nameOfForm == formTab[i])
			return ((this->*formMakers[i])(target));
	}
	std::cout << "unknown form please try again" << std::endl;
	return (NULL);
	// switch (nameOfForm){
	// 	case "shrubbery creation":
	// 		form = new ShrubberyCreationForm(target);
	// 		std::cout << "Intern creates shrubbery form" << std::endl;
	// 		break;
	// 	case "robotomy request":
	// 		form = new RobotomyRequestForm(target);
	// 		std::cout << "Intern creates robotomy form" << std::endl;
	// 		break;
	// 	case "presidential pardon":
	// 		form = new PresidentialPardonForm(target);
	// 		std::cout << "Intern creates presidential pardon form" << std::endl;
	// 		break;
	// 	default :
	// 		std::cout << "unknown form please try again" << std::endl;
	// }
	return (form);
}