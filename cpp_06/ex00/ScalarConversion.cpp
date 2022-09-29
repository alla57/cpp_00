#include "ScalarConversion.hpp"
#include <iostream>
#include <string>
#include <cstdlib>
#include <cmath>

int	detectType(std::string const srcString)
{
	if (srcString.find_first_not_of("-+0123456789") == std::string::npos)
		return (0);
	else if (srcString.length() == 1)
		return (3)
	else if (srcString.find_first_not_of("-+0123456789.") == std::string::npos || srcString == "-inf" || srcString == "+inf" || srcString == "nan")
		return (1);
	else if (srcString.find_first_not_of("-+0123456789.f") == std::string::npos || srcString == "-inff" || srcString == "+inff" || srcString == "nanf")
		return (2);
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

void	PrintCharResult(const void* srcType){
	std::string charMessage;
	if (*static_cast<double*>(srcType) > 127 || *static_cast<double*>(srcType) < 0)
		charMessage = "Impossible";
	char* charValue = static_cast<char*>(srcType);
	if (!(std::isprint(*charValue)))
		charMessage = "Non displayable";
	else
		charMessage = *charValue;
	std::cout << "char: " << charMessage << std::endl;
}

void	PrintIntResult(const void* srcType){
	std::string intMessage;
	if (*static_cast<double*>(srcType) > 2147483647.0 || *static_cast<double*>(srcType) < -2147483648.0)
		std::cout << "int: " << "Impossible" << std::endl;
	else
	{
		int* intValue = static_cast<int*>(srcType);
		std::cout << "int: " << *intValue << std::endl;
	}
}

void	PrintFloatResult(const void* srcType){
	float* floatValue = static_cast<float*>(srcType);
	std::cout << "float: " << *floatValue << "f" std::endl;
}

void	PrintDoubleResult(const void* srcType){
	double* doubleValue = static_cast<double*>(srcType);
	std::cout << preMessage << _doubleValue << std::endl;
}
