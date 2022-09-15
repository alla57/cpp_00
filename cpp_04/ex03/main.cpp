#include "Character.hpp"
#include "Ice.hpp"
#include "MateriaSource.hpp"
#include "Cure.hpp"
#include <iostream>

int main()
{
	{
		IMateriaSource* src = new MateriaSource();
		src->learnMateria(new Ice());
		src->learnMateria(new Cure());
		ICharacter* me = new Character("me");
		AMateria* tmp;
		tmp = src->createMateria("ice");
		me->equip(tmp);
		tmp = src->createMateria("cure");
		me->equip(tmp);
		ICharacter* bob = new Character("bob");
		me->use(0, *bob);
		me->use(1, *bob);
		delete bob;
		delete me;
		delete src;
	}
	{
		AMateria* i1 = new Ice;
		AMateria* i2 = new Ice;
		AMateria* i3 = new Ice;

		AMateria* c1 = new Cure;
		AMateria* c2 = new Cure;
		AMateria* c3 = new Cure;

		ICharacter* me = new Character("me");
		ICharacter* me2 = new Character("me2");
		ICharacter* me3 = new Character("me3");

		me->equip(i1);
		me->equip(c2);
		me->equip(i3);

		me2->equip(c1);
		me2->equip(i2);
		me2->equip(c3);

		*me3 = *me;
		delete me;
		std::cout << "me3 name: " << me3->getName() << std::endl;
		me3->use(0, *me2);
		me3->use(1, *me2);
		me3->use(2, *me2);
		me3->use(3, *me2);
		me3->unequip(2);
		me3->unequip(1);
		me3->unequip(0);
		me3->use(0, *me2);
		me3->use(1, *me2);
		me3->use(2, *me2);
		delete me2;
		delete me3;
		return(0);
	}
}