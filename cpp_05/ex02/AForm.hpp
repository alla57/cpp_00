#ifndef AFORM_HPP
# define AFORM_HPP

# include <string>
# include <exception>
# include "Bureaucrat.hpp"

class Bureaucrat;

class MyException : public std::exception{
public :
	MyException(const char *errorMsg = "Unkown error") : msg(errorMsg){
	}
	const char*	what() const noexcept{
		return (msg);
	}
private :
	const char* msg;
};

class AForm{
public :
	AForm();
	AForm(const std::string & name, const int & gradeToSign, const int & gradeToExecute, const std::string & target);
	AForm(AForm const & src);

	const AForm & operator=(const AForm & rhs);

	void	beSigned(const Bureaucrat & bureaucrat);
	void	execute(Bureaucrat const & executor) const;
	virtual void	executeTheForm() const = 0;

	const std::string	getName() const;
	bool				getIsSigned() const;
	int					getGradeToSign() const;
	int					getGradeToExecute() const;
	std::string			getTarget() const;
	void				setTarget(const std::string & newTarget);
	void				setIsSigned(bool isSigned);

	MyException	GradeTooHighException{"Error : grade is too high"};
	MyException	GradeTooLowException{"Error : grade is too low"};
	MyException	FormIsNotSignedException{"Error : form is not signed yet"};
private:
	const std::string	_name;
	bool				_isSigned;
	const int			_gradeToSign;
	const int			_gradeToExecute;
	std::string			_target;
};

std::ostream &		operator<<(std::ostream & output, const AForm & form);
#endif