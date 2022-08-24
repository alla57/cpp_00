#ifndef CAT_HPP
# define CAT_HPP

# include "AAnimal.hpp"
# include "Brain.hpp"

class Cat : public AAnimal
{
public:
	Cat(void);
	Cat(Cat const & src);
	~Cat();

	Cat const & operator=(Cat const & rhs);

	void				makeSound() const;
	std::string const &	getType(void) const;
	const Brain *		getBrain() const;
	void				setBrainIdea(std::string idea, int pos);

private:
	Brain * _brain;
};

#endif