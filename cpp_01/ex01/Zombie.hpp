#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie
{

public:
	Zombie(std::string name = "");
	~Zombie();
	void	setName(std::string name);
	void	annonce(void) const;

private:
	std::string	name;
};

Zombie* zombieHorde(int N, std::string name);

#endif