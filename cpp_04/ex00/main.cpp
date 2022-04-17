#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* inu = new Dog();
	const Animal* neko = new Cat();
	std::cout << inu->getType() << " " << std::endl;
	std::cout << neko->getType() << " " << std::endl;
	inu->makeSound();
	neko->makeSound();
	meta->makeSound();
	return (0);
}