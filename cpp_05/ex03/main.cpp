#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"
#include <iostream>

int main()
{
	Intern intern;
	AForm* form1 = intern.makeForm("blou blou", "mytarget");
	(void) form1;
	AForm* form2 = intern.makeForm("shrubbery creation", "mytarget");
	std::cout << *form2 << std::endl;
	AForm* form3 = intern.makeForm("robotomy request", "mytarget");
	std::cout << *form3 << std::endl;
	AForm* form4 = intern.makeForm("presidential pardon", "mytarget");
	std::cout << *form4 << std::endl;
	delete form2;
	delete form3;
	delete form4;
	return 0;
}