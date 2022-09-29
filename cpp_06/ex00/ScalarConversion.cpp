#include "ScalarConversion.hpp"
#include <iostream>
#include <string>

int	detectType(std::string const srcString)
{
	if (srcString.length() != 0)
	{
		if (srcString.find_first_not_of("0123456789") == std::string::npos)
			return (0);
		else if (srcString.length() == 1)
			return (3)
		else if (srcString.find_first_not_of("0123456789.") == std::string::npos)
			return (1);
		else if (srcString.find_first_not_of("0123456789f") == std::string::npos)
			return (2);
	}
	return (4);
}

void	convertStringToChar(const char* srcString)
{
	_charValue = srcString[0];
}

void	convertStringToInt(const char* srcString)
{
	_intValue = std::atoi(srcString);
}

void	convertStringToFloat(const char* srcString)
{
	_floatValue = std::strtof(srcString);
}

void	convertStringToDouble(const char* srcString)
{
	_doubleValue = std::strtod(srcString);
}

void	PrintCharResult(const void & srcType){
	std::string preMessage("char: ");
	_charValue = static_cast<char>(srcType);
	if (!(std::isprint(c)))
		std::cout << preMessage << "Non displayable" << std::endl;
	else
		std::cout << preMessage << _charValue << std::endl;
}

void	PrintIntResult(const void & srcType){
	std::string preMessage("int: ");
	_intValue = static_cast<int>(srcType);
	void tmp = static_cast<void>(_intValue);
	if (tmp != srcType)
		std::cout << preMessage << "impossible" << std::endl;
	else
		std::cout << preMessage << _intValue << std::endl;
}

void	PrintFloatResult(const void & srcType){
	std::string preMessage("float: ");
	_floatValue = static_cast<float>(srcType);
	std::cout << preMessage << _floatValue << std::endl;
}

void	PrintDoubleResult(const void & srcType){
	std::string preMessage("double: ");
	_doubleValue = static_cast<double>(srcType);
	std::cout << preMessage << _doubleValue << std::endl;
}
