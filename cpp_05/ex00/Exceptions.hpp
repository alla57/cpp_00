#ifndef EXCEPTIONS_HPP
# define EXCEPTIONS_HPP

# include <exception>

class MyException : public exception
{
	virtual const char * what() const throw();
}myEx;

#endif