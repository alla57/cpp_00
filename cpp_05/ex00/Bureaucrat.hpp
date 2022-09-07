#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <string>

class Bureaucrat
{
public :
	Bureaucrat();
	Bureaucrat(const Bureaucrat & src);
	~Bureaucrat();

	const Bureaucrat & operator=(const Brueaucrat & rhs);

	void	incrementGrade();
	void	decrementGrade();

	const std::string &	getName() const;
	const int &			getGrade() const;
private :
	const std::string	_name;
	int					_grade;
};
#endif