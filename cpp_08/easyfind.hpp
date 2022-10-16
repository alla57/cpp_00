#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <algorithm>

template<class T>
typename T::iterator	easyFind(T & anyContainer, int nbToFind)
{
	typename T::iterator foundOccurence = std::find(anyContainer.begin(), anyContainer.end(), nbToFind);
    if (foundOccurence == anyContainer.end())
		std::cout << "No match found !" << std::endl;
	else
		std::cout << "Match found !" << std::endl;
    return (foundOccurence);
}

#endif