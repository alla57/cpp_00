#include <iostream>

int main()
{
	std::string brainStr = "HI THIS IS BRAIN";
	std::string *stringPTR = &brainStr;
	std::string &stringREF = brainStr;

	std::cout << stringPTR << std::endl;
	std::cout << &stringREF << std::endl;
	std::cout << *stringPTR << std::endl;
	std::cout << stringREF << std::endl;
	return (0);
}