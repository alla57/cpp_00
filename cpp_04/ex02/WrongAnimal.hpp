#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP
# include <iostream>

class WrongAnimal
{
public:
	WrongAnimal(void);
	WrongAnimal(WrongAnimal const & rhs);
	~WrongAnimal();

	WrongAnimal const & operator=(WrongAnimal const &);

	void		makeSound(void) const;
	std::string const &	getType(void) const;

protected:
	std::string type;
};

#endif