#include <iostream>
#include <sstream>
#include <ios>

int	main()
{
	int index;
	// std::string str;
	// std::getline(std::cin, str);
	// std::stringstream(str) >> index;
	std::cin >> index;
	if (index != 15)
		std::cout << index << std::endl;
	else
		std::cout << "success" << std::endl;
	return 0;
}