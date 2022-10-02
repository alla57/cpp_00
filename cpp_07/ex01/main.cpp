#include "Template.hpp"
#include <iostream>
#include <string>
#include <cstring>

void	printChar(const char c){
	std::cout << c << std::endl;
}

void	printInt(const int i){
	std::cout << i << std::endl;
}

int main( void )
{
	char *str = new char[8];
	str[0] = 'b';
	str[1] = 'o';
	str[2] = 'n';
	str[3] = 'j';
	str[4] = 'o';
	str[5] = 'u';
	str[6] = 'r';
	str[7] = '\0';
	iter<char, size_t, void>(str, strlen(str), &printChar);
	delete[] str;
	std::cout << std::endl;
	int inTab[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	iter<int, int, void>(inTab, 10, &printInt);
	return 0;
}