#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* chien = new Dog();
	const Animal* chien2 = new Dog();
	const Animal* chat = new Cat();
	std::cout << chien->getType() << " " << std::endl;
	std::cout << chien2->getType() << " " << std::endl;
	std::cout << chat->getType() << " " << std::endl;
	std::cout << meta->getType() << " " << std::endl;
	chien->makeSound();
	chien2->makeSound();
	chat->makeSound();
	meta->makeSound();
	std::cout << std::endl;
	const WrongAnimal* meta2 = new WrongAnimal();
	const WrongAnimal* chat2 = new WrongCat();
	std::cout << meta2->getType() << " " << std::endl;
	std::cout << chat2->getType() << " " << std::endl;
	chat2->makeSound();
	meta2->makeSound();
	delete meta;
	delete chien;
	delete chien2;
	delete chat;
	delete meta2;
	delete chat2;
	return (0);
}