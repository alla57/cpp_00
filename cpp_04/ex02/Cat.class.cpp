#include "Cat.hpp"

//		CONSTRUCTORS AND DESTRUCTORS

Cat::Cat(void) : AAnimal(){
	std::cout << "Cat Default constructor called" << std::endl;
	type = "Cat";
	_brain = new Brain;
	return ;
}

Cat::Cat(Cat const & src) : AAnimal(){
	std::cout << "Cat Copy constructor called" << std::endl;
	_brain = new Brain;
	*this = src;
	return ;
}

Cat::~Cat(){
	std::cout << "Cat Default Destructor called" << std::endl;
	delete _brain;
	return ;
}

//			ASSIGNEMENT OPERATOR

Cat const & Cat::operator=(Cat const & rhs){
	this->type = rhs.getType();
	delete _brain;
	_brain = new Brain;
	*this->_brain = *rhs.getBrain();
	return (*this);
}

//		ACTION FUNCTION MEMBER

void	Cat::makeSound(void) const{
	std::cout << "Miaou!" << std::endl;
	return ;
}

//		GETTERS

std::string const &	Cat::getType(void) const{
	return (type);
}

const Brain	*	Cat::getBrain(void) const{
	return (_brain);
}

void	Cat::setBrainIdea(std::string idea, int pos)
{
	this->_brain->setIdea(idea, pos);
}