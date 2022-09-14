#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <string>
# include "ICharacter.hpp"
# include "AMateria.hpp"
# include "LinkedList.hpp"

class Character : public ICharacter
{
public:
	Character();
	Character(const std::string & name);
	Character(const Character & src);
	~Character();

	Character const & operator=(const Character & rhs);

	void equip(AMateria* m);
	void unequip(int idx);
	void use(int idx, ICharacter& target);

	std::string const &	getName() const;
private:
	std::string _name;
	AMateria*	_inventory[4];
	int			_idx;
	LinkedList	_unEquippedMaterias;
};

#endif