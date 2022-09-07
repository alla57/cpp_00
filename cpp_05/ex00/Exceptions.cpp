#include <exception>
#include <iostream>
#include <string>

const char * what() const throw(){
	return ("my exception");
}