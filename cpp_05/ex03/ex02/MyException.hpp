#ifndef MYEXCEPTION_HPP
# define MYEXCEPTION_HPP

# include <exception>

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

#endif