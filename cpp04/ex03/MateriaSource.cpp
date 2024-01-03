#include "inc/MateriaSource.hpp"

// Default constructor
MateriaSource::MateriaSource() {
	for (int i = 0; i < MAX_EQUIPED; i++)
		_bag[i] = NULL;
	return;
}

// Copy constructor
MateriaSource::MateriaSource(const MateriaSource &other) {
	*this = other;
	return;
}

// Copy assignment overload
MateriaSource &MateriaSource::operator=(const MateriaSource &rhs) {
	(void)rhs;
	return *this;
}

// Default destructor
MateriaSource::~MateriaSource() {
	for (int i = 0; i < MAX_EQUIPED; i++)
		if (_bag[i])
			delete _bag[i];
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

// AMateria* MateriaSource::createMateria(std::string const & type){
	
// }
