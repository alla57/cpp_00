#ifndef INTERN_HPP
# define INTERN_HPP

# include <string>

class AForm;

class Intern{
public :
	Intern();
	Intern(Intern const & src);
	~Intern();

	const Intern & operator=(const Intern & rhs);

	AForm*	makeForm(const std::string & nameOfForm, const std::string & target);
	AForm*	makeShrubberyCreationForm(const std::string & target);
	AForm*	makeRobotomyRequestForm(const std::string & target);
	AForm*	makePresidentialPardonForm(const std::string & target);
};

#endif