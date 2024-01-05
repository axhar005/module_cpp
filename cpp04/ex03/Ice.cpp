#include "inc/Ice.hpp"
#include "inc/AMateria.hpp"
#include "inc/colors.hpp"

// Default constructor
Ice::Ice() : AMateria("ice"){
	if (CALL)
		std::cout << MAGENTA << "Ice Construction as been called" << RESET << std::endl;
	return;
}

// Copy constructor
Ice::Ice(const Ice &other) {
	if (CALL)
		std::cout << MAGENTA << "Ice Copy Construction as been called" << RESET << std::endl;
	*this = other;
	return;
}

// Copy assignment overload
Ice &Ice::operator=(const Ice &rhs) {
	if (CALL)
		std::cout << MAGENTA << "Ice Copy assignment overload as been called" << RESET << std::endl;
	(void)rhs;
	return *this;
}

// Default destructor
Ice::~Ice() {
	if (CALL)
		std::cout << MAGENTA << "Ice Deconstruction as been called" << RESET << std::endl;
	return;
}

AMateria *Ice::clone() const{
	AMateria *clone = new Ice(*this);
	return clone;
}

void Ice::use(ICharacter& target){
	std::cout << CYAN << "* shoots an ice bolt at " << target.getName() << " *" << RESET << std::endl;
}