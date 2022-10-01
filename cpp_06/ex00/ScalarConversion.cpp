#include "ScalarConversion.hpp"
#include <iostream>
#include <string>
#include <cstdlib>
#include <cmath>
#include <iomanip>

int	detectType(std::string const srcString)
{
	if (srcString.length() == 1 && !ft_isdigit(srcString[0]))
		return (3);
	else if (srcString.find_first_not_of("-+0123456789") == std::string::npos)
		return (0);
	else if (srcString.find_first_not_of("-+0123456789.") == std::string::npos || srcString == "-inf" || srcString == "+inf" || srcString == "nan")
		return (1);
	else if (srcString.find_first_not_of("-+0123456789.f") == std::string::npos || srcString == "-inff" || srcString == "+inff" || srcString == "nanf")
		return (2);
	return (4);
}

char	convertStringToChar(const char* srcString){
	return (srcString[0]);
}

int	convertStringToInt(const char* srcString){
	return (std::atoi(srcString));
}

float	convertStringToFloat(const char* srcString){
	return (std::strtof(srcString, NULL));
}

double	convertStringToDouble(const char* srcString){
	return (std::strtod(srcString, NULL));
}

void	PrintCharResult(double srcType){
	std::string charMessage;
	if (srcType > 127 || srcType < 0)
		charMessage = "Impossible";
	else
	{
		char charValue = static_cast<char>(srcType);
		if (!(std::isprint(charValue)))
			charMessage = "Non displayable";
		else
			charMessage = charValue;
	}
	std::cout << "char: " << charMessage << std::endl;
}

void	PrintIntResult(const char* srcString, double srcType){
	if (std::strtof(srcString, NULL) > 2147483647.0 || std::strtof(srcString, NULL) < -2147483648.0 || std::string(srcString) == std::string("nan") || std::string(srcString) == std::string("nanf"))
		std::cout << "int: " << "Impossible" << std::endl;
	else
	{
		int intValue = static_cast<int>(srcType);
		std::cout << "int: " << intValue << std::endl;
	}
}

void	PrintFloatResult(double srcType, int precision){
	float floatValue = static_cast<float>(srcType);
	std::cout << "float: " << std::fixed << std::setprecision(precision) << floatValue << "f" << std::endl;
}

void	PrintDoubleResult(double srcType, int precision){
	std::cout << "double: " << std::fixed << std::setprecision(precision) << srcType << std::endl;
}

int		getPrecision(const char *srcString, int type){
	int precision = 0;
	if (type == 0 || type == 3)
		precision = 1;
	else if (type == 1 || type == 2)
	{
		int i = 0;
		while (srcString[i] != '.')
			++i;
		++i;
		while (ft_isdigit(srcString[i]))
		{
			++i;
			++precision;
		}
		--i;
		while (srcString[i] == '0')
		{
			--i;
			--precision;
		}
		if (precision < 1)
			precision = 1;
	}
	return (precision);
}