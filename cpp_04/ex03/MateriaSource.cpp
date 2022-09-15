#include "MateriaSource.hpp"
#include <iostream>

//			CONSTRUCTORS

MateriaSource::MateriaSource() : IMateriaSource(){
	_idx = 0;
	return;
}

MateriaSource::MateriaSource(const MateriaSource & src) : IMateriaSource(){
	*this = src;
	return;
}

MateriaSource::~MateriaSource(){
	for (int i = 0; i < _idx; i++)
		delete _inventory[i];
	return ;
}

//			ASSIGNEMENT OPERATOR OVERLOAD

const MateriaSource &	MateriaSource::operator=(const MateriaSource & rhs){
	if (this == &rhs)
		return (*this);
	for (int i = 0; i < rhs.getNOfMateria(); i++)
		*_inventory[i] = *(rhs.getMateria(i));
	_idx = rhs.getNOfMateria();
	return (*this);
}

//					METHODS

void		MateriaSource::learnMateria(AMateria* m)
{
	if (_idx > 3)
		return ;
	_inventory[_idx] = m;
	_idx++;
}

AMateria*	MateriaSource::createMateria(std::string const & type)
{
	int i = 0;

	if (_idx > 0)
	{
		while (i < _idx)
		{
			if ((_inventory[i])->getType() == type)
				break;
			++i;
			if (i == _idx)
				return (0);
		}
		return (_inventory[i]->clone());
	}
	return (0);
}

int			MateriaSource::getNOfMateria() const
{
	return (_idx);
}

AMateria*	MateriaSource::getMateria(int idx) const
{
	if (idx < _idx && idx >= 0 && idx <= 3)
		return (_inventory[idx]);
	return (0);
}