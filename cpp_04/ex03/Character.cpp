#include "Character.hpp"
#include <iostream>

//					CONSTRUCTORS

Character::Character() : ICharacter(), _name("default"), _idx(0){
	std::cout << "Character default constructor called" << std::endl;
	return ;
}

Character::Character(const std::string & name) : ICharacter(), _name(name), _idx(0){
	std::cout << "Character " << name << " constructor called" << std::endl;
	return ;
}

Character::Character(const Character & rhs) : ICharacter(){
	std::cout << "Character copy constructor called" << std::endl;
	*this = rhs;
	return ;
}

Character::~Character(){
	std::cout << "Character " << _name << " destructor called" << std::endl;
	for (int i = 0; i < _idx; i++)
		delete _inventory[i];
	return ;
}

//					ASSIGNEMENT OPERATOR

Character const & Character::operator=(const Character & rhs){
	if (this == &rhs)
		return (*this);
	_idx = rhs._idx;
	_name = rhs.getName();
	int i = 0;
	int NOfMateria = _idx;
	AMateria *tmp;
	while (i < NOfMateria)
	{
		tmp = _inventory[i];
		_inventory[i] = rhs._inventory[i]->clone();
		delete tmp;
		++i;
	}
	return (*this);
}

// Character const & Character::operator=(const Character & rhs){
// 	if (this == &rhs)
// 		return (*this);
// 	_idx = rhs._idx;
// 	_name = rhs.getName();
// 	int i = 0;
// 	int NOfMateria = _idx;
// 	AMateria *tmp;
// 	while (i < NOfMateria)
// 	{
// 		tmp = _inventory[i];
// 		_inventory[i] = _inventory->clone();
// 		delete tmp;
// 		++i;
// 	}
// 	return (*this);
// }

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
