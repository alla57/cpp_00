#include "Array.hpp"
#include <iostream>
#include <cstdlib>

template<typename T>
void	printArray(T& tab, std::size_t size)
{
	for (size_t i = 0; i < size; i++)
		std::cout << tab[i] << std::endl;
}

int main( void )
{
	try{
		Array<int> zero;
		std::cout << "size: " << zero.size() << std::endl;
		Array<int> intTab(12);
		std::cout << "size: " << intTab.size() << std::endl;
		printArray< Array< int > >(intTab, intTab.size());
		zero = intTab;
		std::cout << "size: " << zero.size() << std::endl;
		printArray< Array< int > >(zero, intTab.size());
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return 0;
}