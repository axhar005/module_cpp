#include "inc/Cure.hpp"
#include "inc/AMateria.hpp"
#include "inc/colors.hpp"

// Default constructor
Cure::Cure() : AMateria("cure"){
	return;
}

// Copy constructor
Cure::Cure(const Cure &other) {
	*this = other;
	return;
}

// Copy assignment overload
Cure &Cure::operator=(const Cure &rhs) {
	(void)rhs;
	return *this;
}

// Default destructor
Cure::~Cure() {
	return;
}

AMateria *Cure::clone() const{
	AMateria *clone = new Cure(*this);
	return clone;
}

void Cure::use(ICharacter& target){
	std::cout << GREEN << "* heals " << target.getName() << "'s wounds *" << RESET << std::endl;
}