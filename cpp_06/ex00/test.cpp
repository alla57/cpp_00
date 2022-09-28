#include <string>
#include <iostream>
#include <cstdlib>
#include <cmath>
#include <iomanip>

int main(){
	// const char* str = "25.250";
	// char* str_end;
	// std::cout << std::strtof(str, &str_end) << std::endl;
	// if (*str_end != '\0')
	// 	std::cout << "invadli" << std::endl;
	char c;
	float a;
	double b = 3.402823466E+45;
	a = static_cast<float>(b);
	int i = static_cast<int>(a);
	// if (a == HUGE_VALF)
	// 	return 0;
	c = static_cast<char>(b);
	std::cout << "|" << c << "|" << std::endl;
	a = 250.123f;
	std::cout << std::setprecision(12) << std::showpoint << a << std::endl;
	std::cout << HUGE_VALF << std::endl;
	return 0;
}