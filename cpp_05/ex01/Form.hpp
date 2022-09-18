#ifndef FORM_HPP
# define FORM_HPP

# include <string>

class Form{
public :
	Form();
	Form(const std::string & name, const int & gradeToSign, const int & gradeToExecute);
	Form(Form const & src);

	const Form & operator=(const Form & rhs);

	void	beSigned(const Bureaucrat & bureaucrat);

	void	getName() const;
	void	getIsSigned() const;
	void	getGradeToSign() const;
	void	getGradeToExecute() const;
private:
	const std::string	_name;
	bool				_isSigned;
	const int			_gradeToSign;
	const int			_gradeToExecute;
}

std::ostream &		operator<<(std::ostream & output, const Form & form);
#endif