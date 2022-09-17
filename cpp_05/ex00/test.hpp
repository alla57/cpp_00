#ifndef LO
# define LO

#include <string>
#include <iostream>

class A
{
public :
	A(int len){
		if (len > 25)
			throw 24;
		std::cout << "A constructor called" << std::endl;
	}
	~A(){
		std::cout << "A destructor called" << std::endl;
	}
};

class Test //: public A
{
public :
	Test(int len);
	~Test();
private :
	int _len;
};
#endif