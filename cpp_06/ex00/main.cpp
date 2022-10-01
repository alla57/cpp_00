#include <iostream>
#include <string>
#include "ScalarConversion.hpp"

size_t	ft_strlen(const char *str)
{
	if (!str)
		return (0);
	int i = 0;
	while (str[i])
		++i;
	return (i);
}

bool	ft_isdigit(char c)
{
	if (c >= '0' && c <= '9')
		return (true);
	return (false);
}

bool	isFormatNumberValid(const char* str)
{
	int i = 0;
	if (str[i] == '-' || str[i] == '+')
		++i;
	if (ft_isdigit(str[i]))
	{
		while (ft_isdigit(str[i]))
			++i;
		if (str[i] == '\0')
			return (true);
	}
	else
		return (false);
	if (str[i] == '.')
	{
		++i;
		if (!ft_isdigit(str[i]))
			return (false);
		while (ft_isdigit(str[i]))
			++i;
		if (str[i] == 'f')
		++i;
	}
	if (str[i])
		return (false);
	return (true);
}

bool	isSpecialValue(const char *srcString){
	std::string str(srcString);
	if (str == "-inff" || str == "+inff" || str == "nanf" || str == "-inf" || str == "+inf" || str == "nan")
		return (true);
	return (false);
}

bool	argumentIsValid(int argc, const char **argv)
{
	if (argc != 2)
	{
		std::cerr << "Wrong number of arguments !" << std::endl;
		return (0);
	}
	const char *srcString = argv[1];
	if (!isFormatNumberValid(srcString))
	{
		if (ft_strlen(srcString) != 1 && !isSpecialValue(srcString))
		{
			std::cerr << "Invalid format !" << std::endl;
			return (0);
		}
	}
	return (1);
}

int main(int argc, char *argv[])
{
	if (!argumentIsValid(argc, const_cast<const char**>(argv)))
		return (1);
	const char *srcString = argv[1];
	int type = detectType(srcString);
	double value = 0.0;
	if (type == 0)
		value = static_cast<double>(convertStringToInt(srcString));
	else if (type == 1)
		value = static_cast<double>(convertStringToDouble(srcString));
	else if (type == 2)
		value = static_cast<double>(convertStringToFloat(srcString));
	else if (type == 3)
		value = static_cast<double>(convertStringToChar(srcString));
	else if (type == 4)
		return (1);
	int precision = getPrecision(srcString, type);
	PrintCharResult(value);
	PrintIntResult(srcString, value);
	PrintFloatResult(value, precision);
	PrintDoubleResult(value, precision);
	return (0);
}