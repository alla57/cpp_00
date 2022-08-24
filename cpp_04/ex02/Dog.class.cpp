#include "Dog.hpp"

//		CONSTRUCTORS AND DESTRUCTORS

Dog::Dog(void) : AAnimal(){
	std::cout << "Dog Default constructor called" << std::endl;
	type = "Dog";
	_brain = new Brain;
	return ;
}

Dog::Dog(Dog const & src) : AAnimal(){
	std::cout << "Dog Copy constructor called" << std::endl;
	_brain = new Brain;
	*this = src;
	return ;
}

Dog::~Dog(){
	std::cout << "Dog Default Destructor called" << std::endl;
	delete _brain;
	return ;
}

//			ASSIGNEMENT OPERATOR

Dog const & Dog::operator=(Dog const & rhs){
	this->type = rhs.getType();
	delete _brain;
	_brain = new Brain;
	*this->_brain = *rhs.getBrain();
	return (*this);
}

//		ACTION FUNCTION MEMBER

void	Dog::makeSound(void) const{
	std::cout << "Waouf!" << std::endl;
	return ;
}

//		GETTERS

std::string const &	Dog::getType(void) const{
	return (type);
}

const Brain *	Dog::getBrain(void) const{
	return (_brain);
}

void	Dog::setBrainIdea(std::string idea, int pos)
{
	this->_brain->setIdea(idea, pos);
}