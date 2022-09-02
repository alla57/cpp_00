#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"
# include "AMateria.hpp"
# include <string>

class MateriaSource : public IMateriaSource
{
public:
	MateriaSource();
	MateriaSource(MateriaSource const & src);
	virtual ~MateriaSource();

	const MateriaSource & operator=(MateriaSource const & rhs);

	void					learnMateria(AMateria* m);
	AMateria*				createMateria(std::string const & type);
	int						getNOfMateria() const;
	AMateria*	getMateria(int idx) const;
private:
	AMateria*	_inventory[4];
	int			_idx;
};

#endif