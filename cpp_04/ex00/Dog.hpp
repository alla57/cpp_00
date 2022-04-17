#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"

class Dog : public Animal
{
public:
	Dog(void);
	Dog(Dog const & src);
	~Dog();

	Dog const & operator=(Dog const & rhs);

	void			makeSound() const;
	std::string const &	getType(void) const;
};

#endif