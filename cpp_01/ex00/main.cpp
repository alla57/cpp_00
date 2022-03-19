#include "Zombie.hpp"

int main()
{
	Zombie* zombie;
	zombie = newZombie("alfred");
	zombie->annonce();
	delete zombie;
	randomChump("bob");
	return (0);
}