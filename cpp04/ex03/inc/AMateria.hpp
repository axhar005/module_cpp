#ifndef AMATERIA_HPP_
#define AMATERIA_HPP_

#include "ICharacter.hpp"
#include <iostream>
#include <string>

// Class declaration
class AMateria {
	public:
		AMateria();	// Default constructor
		AMateria(std::string const & type);
		AMateria(const AMateria &other); // Copy constructor
		AMateria &operator=(const AMateria &rhs);	// Copy assignment overload
		virtual ~AMateria();	// Default destructor
		std::string const &getType() const; //Returns the materia type
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);

	protected:
		std::string _type;

};

#endif // AMATERIA_HPP_