#include "Bureaucrat.hpp"
#include <iostream>

int main()
{
	try {
		Bureaucrat jean("jean", 151);
	}
	catch (...){
	}
	try {
		Bureaucrat jean("jean", 1);
		Bureaucrat jules("jules", 2);
		std::cout << jean << std::endl;
		std::cout << jules << std::endl;
		jean = jules;
		std::cout << jean << std::endl;
	}
	catch (...){
	}
	return 0;
}