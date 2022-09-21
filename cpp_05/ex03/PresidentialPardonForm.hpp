#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "AForm.hpp"
# include "Bureaucrat.hpp"

class PresidentialPardonForm : public AForm{
public :
	PresidentialPardonForm();
	PresidentialPardonForm(const std::string & target);
	PresidentialPardonForm(PresidentialPardonForm const & src);
	~PresidentialPardonForm();

	const PresidentialPardonForm & operator=(const PresidentialPardonForm & rhs);

	void	executeTheForm() const;
};

#endif