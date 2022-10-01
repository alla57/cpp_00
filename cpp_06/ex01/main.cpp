#include <iostream>
#include <string>
#include "Data.hpp"
#include <stdint.h>

uintptr_t	serialize(Data* ptr){
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data* deserialize(uintptr_t raw){
	return (reinterpret_cast<Data*>(raw));
}

int	main()
{
	Data d;
	d.anInteger = 25;
	d.aChar = 'c';
	d.aString = "bonjour";
	uintptr_t ptr = serialize(&d);
	Data *dCasted = deserialize(ptr);
	std::cout << &d << std::endl;
	std::cout << dCasted << std::endl;
	std::cout << "anInteger :" << d.anInteger << " aChar:" << d.aChar << " aString :" << d.aString << std::endl;
	std::cout << "anInteger :" << dCasted->anInteger << " aChar:" << dCasted->aChar << " aString :" << dCasted->aString << std::endl;
	return (0);
}