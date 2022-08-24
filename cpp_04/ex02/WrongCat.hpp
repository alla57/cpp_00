#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
public:
	WrongCat(void);
	WrongCat(WrongCat const & src);
	~WrongCat();

	WrongCat const & operator=(WrongCat const & rhs);

	void			makeSound() const;
	std::string const &	getType(void) const;
};

#endif