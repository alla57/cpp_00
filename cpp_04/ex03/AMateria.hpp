#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include "ICharacter.hpp"
# include <string>

class AMateria
{
public:
	AMateria();
	AMateria(std::string const & type);
	AMateria(const AMateria & src);
	virtual AMateria~();

	const AMateria & operator=(const AMateria & rhs);

	std::string const & getType() const; //Returns the materia type

	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);

protected:
	std::string type;
};

#endif