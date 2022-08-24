#ifndef DOG_HPP
# define DOG_HPP

# include "AAnimal.hpp"
# include "Brain.hpp"

class Dog : public AAnimal
{
public:
	Dog(void);
	Dog(Dog const & src);
	~Dog();

	Dog const & operator=(Dog const & rhs);

	void				makeSound() const;
	std::string const &	getType(void) const;
	const Brain *		getBrain() const;
	void				setBrainIdea(std::string idea, int pos);

private:
	Brain * _brain;
};

#endif