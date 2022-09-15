#include "Character.hpp"
#include <iostream>

//					CONSTRUCTORS

Character::Character() : ICharacter(), _name("default"), _idx(0){
	return ;
}

Character::Character(const std::string & name) : ICharacter(), _name(name), _idx(0){
	return ;
}

Character::Character(const Character & rhs) : ICharacter(){
	*this = rhs;
	return ;
}

Character::~Character(){
	for (int i = 0; i < _idx; i++)
		delete _inventory[i];
	return ;
}

//					ASSIGNEMENT OPERATOR

ICharacter const & Character::operator=(const ICharacter & rhs){
	this->operator=(dynamic_cast<const Character &>(rhs));
	return (*this);
}

Character const & Character::operator=(const Character & rhs){
	int NOfMateria;
	if (this == &rhs)
		return (*this);

	NOfMateria = _idx;
	for (int i = 0; i < NOfMateria; i++)
		delete	_inventory[i];
	_idx = rhs._idx;
	NOfMateria = _idx;
	for (int i = 0; i < NOfMateria ; i++)
		_inventory[i] = rhs._inventory[i]->clone();
	_name = rhs.getName();
	return (*this);
}

//					METHODS

std::string const & Character::getName() const{
	return (_name);
}

void				Character::equip(AMateria* m)
{
	if (_idx < 4)
		_inventory[_idx++] = m;
}

void				Character::unequip(int idx)
{
	if (idx < 0 || idx > 3 || idx >= _idx)
		return ;
	_unEquippedMaterias.addNode(_inventory[idx]);
	while (idx < _idx)
	{
		_inventory[idx++] = NULL;
		if (idx < _idx)
			_inventory[idx - 1] = _inventory[idx];
	}
	_idx--;
}

void				Character::use(int idx, ICharacter& target)
{
	if (idx >= 0 && idx < 4 && idx < _idx)
		_inventory[idx]->use(target);
}
