#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* inu = new Dog();
	const Animal* inu2 = new Dog();
	inu2 = inu;
	const Animal* neko = new Cat();
	std::cout << inu->getType() << " " << std::endl;
	std::cout << inu2->getType() << " " << std::endl;
	std::cout << neko->getType() << " " << std::endl;
	std::cout << meta->getType() << " " << std::endl;
	inu->makeSound();
	inu2->makeSound();
	neko->makeSound();
	meta->makeSound();
	std::cout << std::endl;
	const WrongAnimal* meta2 = new WrongAnimal();
	const WrongAnimal* neko2 = new WrongCat();
	std::cout << meta2->getType() << " " << std::endl;
	std::cout << neko2->getType() << " " << std::endl;
	neko2->makeSound();
	meta2->makeSound();
	return (0);
}