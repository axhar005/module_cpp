#include "inc/Character.hpp"
#include "inc/Cure.hpp"
#include "inc/IMateriaSource.hpp"
#include "inc/Ice.hpp"
#include "inc/MateriaSource.hpp"

int main()
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
	tmp = src->createMateria("cure");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	tmp = src->createMateria("ice");
	me->equip(tmp);
	ICharacter* bob = new Character("bob");
	*(Character*)bob = *(Character*)me;
	bob->use(0, *bob);
	bob->use(1, *bob);
	bob->use(2, *bob);
	bob->unequip(3);
	delete bob;
	delete me;
	delete src;
	delete tmp;
}