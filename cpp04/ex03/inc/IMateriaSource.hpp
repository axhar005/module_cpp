#ifndef IMATERIASOURCE_HPP_
#define IMATERIASOURCE_HPP_

#include "AMateria.hpp"

// Class declaration
class IMateriaSource {
public:
	virtual ~IMateriaSource() {}	// Default destructor
	virtual void learnMateria(AMateria*) = 0;
	virtual AMateria* createMateria(std::string const & type) = 0;

private:

};

#endif // IMATERIASOURCE_HPP_