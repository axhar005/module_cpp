#ifndef ICE_HPP_
#define ICE_HPP_

#include "AMateria.hpp"

// Class declaration
class Ice : virtual public AMateria{
public:
	Ice();	// Default constructor
	Ice(const Ice &other); // Copy constructor
	Ice &operator=(const Ice &rhs);	// Copy assignment overload
	~Ice();	// Default destructor
	AMateria* clone() const;
	void use(ICharacter& target);

};

#endif // ICE_HPP_