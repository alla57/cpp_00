#include "test.hpp"

	Test::Test(int len) try : _len(len){
		if (len > 25)
			throw 1;
		std::cout << "Test constructor called" << std::endl;
	}
	catch (int x){
		std::cout << "len is too high : " << x << std::endl;
	}
	// {
	// 	std::cout << "Test constructor called and len is now : " << _len << std::endl;
	// 	return ();
	// }
	// Test::Test(int len){
	// 	try{
	// 		if (len > 25)
	// 			throw 25;
	// 	}
	// 	catch (int){
	// 		std::cout << "error" << std::endl;
	// 	}
	// 	std::cout << "Test constructor called" << std::endl;
	// }
	Test::~Test(){
		std::cout << "Test destructor called" << std::endl;
	}