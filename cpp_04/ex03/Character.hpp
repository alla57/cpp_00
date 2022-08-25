#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <string>
# include "ICharacter.hpp"
# include "AMateria.hpp"

class Character : public ICharacter
{
public:
	Character();
	Character(const std::string & name);
	Character(const Character & src);
	~Character();

	operator=(const Character & rhs);

	std::string const & getName() const;
	void equip(AMateria* m);
	void unequip(int idx);
	void use(int idx, ICharacter& target);
	AMateria const * const	getMateria(int idx) const;
	int						getNOfMateria() const;
private:
	std::string _name;
	AMateria*	_inventory[4];
	int			_idx;
};

#endif