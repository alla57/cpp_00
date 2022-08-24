#include "./Brain.hpp"
#include <iostream>

Brain::Brain(){
	std::cout << "Brain default constructor called" << std::endl;
	this->initIdeas();
	return ;
}

Brain::Brain(const Brain & src){
	std::cout << "Brain copy constructor called" << std::endl;
	*this = src;
	return ;
}

Brain::~Brain(){
	std::cout << "Brain default destructor called" << std::endl;
	return ;
}

Brain const & Brain::operator=(const Brain & rhs){
	if (this == &rhs)
		return (*this);
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = rhs.getIdea(i);
	return (*this);
}

const std::string Brain::getIdea(int pos) const
{
	if (pos < 0 || pos > 99)
		return (NULL);
	return (this->_ideas[pos]);
}

void	Brain::setIdea(std::string idea, int pos)
{
	if (pos < 0 || pos > 99)
		return ;
	this->_ideas[pos] = idea;
	return ;
}

void	Brain::initIdeas()
{
	for (int i = 0; i < 100; i++)
		this->setIdea("", i);
}
