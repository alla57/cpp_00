#include <string>
#include <iostream>
#include <cctype>
#include <cstdlib>
#include <cmath>

int main()
{
	// int a = 855;
	// void* b = &a; //static_cast<void>(a);
	// char* c = static_cast<char*>(b);
	// if (*static_cast<int*>(b) > 127)
	// 	std::cout << "too high" << std::endl;
	// std::string str;
	// str = a;
	// std::cout << str << std::endl;
	// double d = 5654532134843132135484353213213543543543543315435465465465465132343543213235454.0;
	// float f = static_cast<float>(d);
	const char *str = "nanf";
	double d = std::strtof(str, NULL);
	// if (-HUGE_VAL == d)
		std::cout << d << std::endl;
	// std::cout << f << std::endl;
	return (0);
}