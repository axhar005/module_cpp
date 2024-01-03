#ifndef MATERIASOURCE_HPP_
#define MATERIASOURCE_HPP_

#include "ICharacter.hpp"
#include "IMateriaSource.hpp"

// Class declaration
class MateriaSource : public IMateriaSource{
public:
	MateriaSource();	// Default constructor
	MateriaSource(const MateriaSource &other); // Copy constructor
	MateriaSource &operator=(const MateriaSource &rhs);	// Copy assignment overload
	~MateriaSource();	// Default destructor
	void learnMateria(AMateria*);
	AMateria* createMateria(std::string const & type);
private:
	AMateria *_bag[4];

};

#endif // MATERIASOURCE_HPP_