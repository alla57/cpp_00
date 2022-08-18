#ifndef ANIMAL_HPP
# define ANIMAL_HPP
# include <iostream>

class Animal
{
public:
	Animal(void);
	Animal(Animal const & rhs);
	virtual ~Animal();

	Animal const & operator=(Animal const &);

	virtual void		makeSound(void) const;
	std::string const &	getType(void) const;

protected:
	std::string type;
};

#endif