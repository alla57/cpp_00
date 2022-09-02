#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include "ICharacter.hpp"
# include <string>

class ICharacter;

class AMateria
{
public:
	AMateria();
	AMateria(std::string const & type);
	AMateria(const AMateria & src);
	virtual ~AMateria();

	const AMateria & operator=(const AMateria & rhs);

	std::string const & getType() const;

	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target) = 0;

protected:
	std::string type;
};

#endif