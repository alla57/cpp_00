#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <string>

class Bureaucrat
{
public :
	Bureaucrat();
	Bureaucrat(const std::string & name, const int & grade);
	Bureaucrat(const Bureaucrat & src);
	~Bureaucrat();

	const Bureaucrat & operator=(const Bureaucrat & rhs);

	void	incrementGrade();
	void	decrementGrade();
	int		GradeTooHighException();
	int		GradeTooLowException();

	const std::string &	getName() const;
	const int &			getGrade() const;
private :
	const std::string	_name;
	int					_grade;
};

std::ostream &		operator<<(std::ostream & output, const Bureaucrat & bureaucrat);
#endif