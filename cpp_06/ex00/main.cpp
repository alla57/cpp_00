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
		if (ft_strlen(srcString) == 1)
			continue;
		else
		{
			std::cerr << "Invalid format !" << std::endl;
			return (0);
		}
	}
	return (1);
}

int main(int argc, char *argv[])
{
	void (*TypeConvertersFunc[])(std::string const &) = {converStringtToInt, convertStringToDouble, convertStringToFloat, convertStringToChar};

	if (!argumentIsValid(argc, argv))
		return (1);
	const char *srcString = argv[1];
	int type = detectType(srcString);
	if (type == 4)
		return (0);
	(*TypeConvertersFunc[type])(srcString);
	return (0);
}