#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
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
		std::cout << std::endl;
		delete form1;
	}
	{
		AForm		*form1 = new RobotomyRequestForm;
		std::cout << form1->getName() << std::endl;
		std::cout << *form1 << std::endl;

		Bureaucrat	jules("Jules" , 45);
		std::cout << jules << std::endl;
		jules.signForm(*form1);
		jules.executeForm(*form1);
		jules.incrementGrade();
		std::cout << jules << std::endl;
		jules.executeForm(*form1);
		delete form1;
	}
	// form1->execute(jules);
	// try {
	// 	Form form1("form_one", 151, 25);
	// }
	// catch (std::exception& e){
	// 	std::cout << e.what() << std::endl;
	// 	std::cout << "Form initialization aborted" << std::endl << std::endl;
	// }
	// try {
	// 	Bureaucrat jean("jean", 24);
	// 	Form form1("form_one", 23, 25);
	// 	std::cout << form1 << std::endl;
	// 	std::cout << jean << std::endl;
	// 	jean.signForm(form1);
	// 	jean.incrementGrade();
	// 	std::cout << jean << std::endl;
	// 	jean.signForm(form1);
	// 	jean.signForm(form1);
	// }
	// catch (std::exception& e){
	// 	std::cout << e.what() << std::endl;
	// 	std::cout << "Form initialization aborted" << std::endl;
	// }
	return 0;
}