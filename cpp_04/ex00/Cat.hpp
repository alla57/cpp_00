#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"

class Cat : public Animal
{
public:
	Cat(void);
	Cat(Cat const & src);
	~Cat();

	Cat const & operator=(Cat const & rhs);

	void			makeSound() const;
	std::string const &	getType(void) const;
};

#endif