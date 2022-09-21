#ifndef FORM_HPP
# define FORM_HPP

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

class Form{
public :
	Form();
	Form(const std::string & name, const int & gradeToSign, const int & gradeToExecute);
	Form(Form const & src);
	~Form();

	const Form & operator=(const Form & rhs);

	void	beSigned(const Bureaucrat & bureaucrat);

	const std::string	getName() const;
	bool				getIsSigned() const;
	int			getGradeToSign() const;
	int			getGradeToExecute() const;

	MyException	GradeTooHighException{"Error : grade is too high"};
	MyException	GradeTooLowException{"Error : grade is too low"};
private:
	const std::string	_name;
	bool				_isSigned;
	const int			_gradeToSign;
	const int			_gradeToExecute;
};

std::ostream &		operator<<(std::ostream & output, const Form & form);
#endif