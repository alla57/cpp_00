#ifndef AANIMAL_HPP
# define AANIMAL_HPP
# include <iostream>

class AAnimal
{
public:
	AAnimal(void);
	AAnimal(AAnimal const & rhs);
	virtual ~AAnimal();

	AAnimal const & operator=(AAnimal const &);

	virtual void		makeSound(void) const = 0;
	std::string const &	getType(void) const;

protected:
	std::string type;
};

#endif