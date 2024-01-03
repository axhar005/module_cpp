#ifndef CURE_HPP_
#define CURE_HPP_

#include "AMateria.hpp"

// Class declaration
class Cure : public AMateria {
public:
	Cure();	// Default constructor
	Cure(const Cure &other); // Copy constructor
	Cure &operator=(const Cure &rhs);	// Copy assignment overload
	~Cure();	// Default destructor
	AMateria* clone() const;
	void use(ICharacter& target);

};

#endif // CURE_HPP_