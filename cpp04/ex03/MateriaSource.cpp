#include "inc/MateriaSource.hpp"
#include "inc/ICharacter.hpp"
#include "inc/colors.hpp"

// Default constructor
MateriaSource::MateriaSource() {
	if (CALL)
		std::cout << MAGENTA << "Character Default Constructor as been called" << RESET << std::endl;
	for (int i = 0; i < MAX_EQUIPED; i++)
		_bag[i] = NULL;
	return;
}

// Copy constructor
MateriaSource::MateriaSource(const MateriaSource &other) {
	if (CALL)
		std::cout << MAGENTA << "Character Copy Constructor as been called" << RESET << std::endl;
	*this = other;
	return;
}

// Copy assignment overload
MateriaSource &MateriaSource::operator=(const MateriaSource &rhs) {
	if (CALL)
		std::cout << MAGENTA << "Character Copy Assignment Overload as been called" << RESET << std::endl;
	(void)rhs;
	return *this;
}

// Default destructor
MateriaSource::~MateriaSource() {
	if (CALL)
		std::cout << MAGENTA << "Character Deconstruction as been called" << RESET << std::endl;
	for (int i = 0; i < MAX_EQUIPED; i++)
		if (_bag[i]){
			delete _bag[i];
		}
	return;
}

void MateriaSource::learnMateria(AMateria *m){
	for (int i = 0; i < MAX_EQUIPED; i++) {
		if (!_bag[i]){
			_bag[i] = m;
			std::cout << "Materia learned !" << std::endl;
			break;
		}
		else if (i == MAX_EQUIPED - 1)
			std::cout << "Bag full !" << std::endl;
	}
}

AMateria* MateriaSource::createMateria(std::string const & type){
	for (int i = 0; i < MAX_EQUIPED; i++) {
		if (_bag[i] && _bag[i]->getType() == type){
			return _bag[i]->clone();
		}
	}
	return 0;
}
