#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include "AForm.hpp"
# include "Bureaucrat.hpp"

class RobotomyRequestForm : public AForm{
public :
	RobotomyRequestForm();
	RobotomyRequestForm(const std::string & target);
	RobotomyRequestForm(RobotomyRequestForm const & src);
	~RobotomyRequestForm();

	const RobotomyRequestForm & operator=(const RobotomyRequestForm & rhs);

	void	executeTheForm() const;
};

#endif