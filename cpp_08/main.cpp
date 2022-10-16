#include "easyfind.hpp"
#include <iostream>
#include <algorithm>
#include <vector>
#include <deque>
#include <list>

int main( void )
{
	int nbToFind = 25;
	std::vector<int> vec;
	std::deque<int> deq;
	std::list<int> lst;
	vec.push_back(25);
	vec.push_back(26);
	vec.push_back(27);
	vec.push_back(28);
	vec.push_back(29);

	deq.push_back(25);
	deq.push_back(26);
	deq.push_back(27);
	deq.push_back(28);
	deq.push_back(29);

	lst.push_back(25);
	lst.push_back(26);
	lst.push_back(27);
	lst.push_back(28);
	lst.push_back(29);

	easyFind< std::vector <int> >(vec, nbToFind);
	easyFind< std::deque <int> >(deq, nbToFind);
	easyFind< std::list <int> >(lst, nbToFind);
	nbToFind = 12;
	easyFind< std::vector <int> >(vec, nbToFind);
	easyFind< std::deque <int> >(deq, nbToFind);
	easyFind< std::list <int> >(lst, nbToFind);
	return 0;
}