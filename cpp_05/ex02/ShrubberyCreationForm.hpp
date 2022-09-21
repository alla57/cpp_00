#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include "AForm.hpp"
# include "Bureaucrat.hpp"

class ShrubberyCreationForm : public AForm{
public :
	ShrubberyCreationForm();
	ShrubberyCreationForm(const std::string & target);
	ShrubberyCreationForm(ShrubberyCreationForm const & src);
	~ShrubberyCreationForm();

	const ShrubberyCreationForm & operator=(const ShrubberyCreationForm & rhs);

	void	beSigned(const Bureaucrat & bureaucrat);
	void	executeTheForm() const;
};

#endif