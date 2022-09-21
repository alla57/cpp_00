#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <iostream>

int main()
{
	{
		AForm		*form1 = new ShrubberyCreationForm;
		std::cout << form1->getName() << std::endl;
		std::cout << *form1 << std::endl;

		Bureaucrat	jules("Jules" , 138);
		std::cout << jules << std::endl;
		jules.signForm(*form1);
		jules.executeForm(*form1);
		jules.incrementGrade();
		std::cout << jules << std::endl;
		jules.executeForm(*form1);
		delete form1;
	}
	{
		std::cout << std::endl;
		AForm		*form1 = new RobotomyRequestForm;
		std::cout << form1->getName() << std::endl;
		std::cout << *form1 << std::endl;

		Bureaucrat	jules("Jules" , 46);
		std::cout << jules << std::endl;
		jules.signForm(*form1);
		jules.executeForm(*form1);
		jules.incrementGrade();
		std::cout << jules << std::endl;
		jules.executeForm(*form1);
		delete form1;
	}
	{
		std::cout << std::endl;
		AForm		*form1 = new PresidentialPardonForm;
		std::cout << form1->getName() << std::endl;
		std::cout << *form1 << std::endl;

		Bureaucrat	jules("Jules" , 6);
		std::cout << jules << std::endl;
		jules.signForm(*form1);
		jules.executeForm(*form1);
		jules.incrementGrade();
		std::cout << jules << std::endl;
		jules.executeForm(*form1);
		delete form1;
	}
	return 0;
}