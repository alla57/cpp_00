#include <iostream>
#include <string>
#include "ScalarConversion.hpp"

int	detectType(std::string const & srcString)
{
	if (srcString.length() != 0)
	{
		if (srcString.find_first_not_of("0123456789") == std::string::npos)
			return (0);
		else if (srcString.find_first_not_of("0123456789.") == std::string::npos)
			return (1);
		else if (srcString.find_first_not_of("0123456789f") == std::string::npos)
			return (2);
		else if (srcString.length() == 1)
			return (3);
	}
	return (4);
}

int main(int argc, char **argv)
{
	(void)argv;
	// int 	type;
	// void (*TypeConvertersFunc[])(std::string const &) = {converStringtToInt, convertStringToDouble, convertStringToFloat, convertStringToChar};

	if (argc != 2)
	{
		std::cout << "Wrong number of arguments !" << std::endl;
		return (1);
	}
	// std::string srcString = argv[1];
	// type = detectType(srcString);
	// if (type == 4)
	// 	return (0);
	// (*TypeConvertersFunc[type])(srcString);
	return (0);
}