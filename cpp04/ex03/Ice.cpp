#include "inc/Ice.hpp"
#include "inc/AMateria.hpp"
#include "inc/colors.hpp"

// Default constructor
Ice::Ice() : AMateria("ice"){
	return;
}

// Copy constructor
Ice::Ice(const Ice &other) {
	*this = other;
	return;
}

// Copy assignment overload
Ice &Ice::operator=(const Ice &rhs) {
	(void)rhs;
	return *this;
}

// Default destructor
Ice::~Ice() {
	return;
}

AMateria *Ice::clone() const{
	AMateria *clone = new Ice(*this);
	return clone;
}

void Ice::use(ICharacter& target){
	std::cout << GREEN << "* heals " << target.getName() << "'s wounds *" << RESET << std::endl;
}