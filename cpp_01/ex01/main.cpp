#include "Zombie.hpp"

int main()
{
	Zombie* horde;
	int n;
	std::string name;

	n = 3;
	name = "alfred";
	horde = zombieHorde(n, name);
	for (int i = 0; i < n; i++)
		horde[i].annonce();
	delete[] horde;
	return (0);
}