#include "inc/Cure.hpp"
#include "inc/AMateria.hpp"
#include "inc/colors.hpp"

// Default constructor
Cure::Cure() : AMateria("cure"){
	if (CALL)
		std::cout << MAGENTA << "Cure Default Constructor as been called" << RESET << std::endl;
	return;
}

// Copy constructor
Cure::Cure(const Cure &other) {
	if (CALL)
		std::cout << MAGENTA << "Cure Copy Constructor as been called" << RESET << std::endl;
	*this = other;
	return;
}

// Copy assignment overload
Cure &Cure::operator=(const Cure &rhs) {
	if (CALL)
		std::cout << MAGENTA << "Cure Copy assignment overload as been called" << RESET << std::endl;
	(void)rhs;
	return *this;
}

// Default destructor
Cure::~Cure() {
	if (CALL)
		std::cout << MAGENTA << "Cure Decontructor as been called" << RESET << std::endl;
	return;
}

AMateria *Cure::clone() const{
	AMateria *clone = new Cure(*this);
	return clone;
}

void Cure::use(ICharacter& target){
	std::cout << GREEN << "* heals " << target.getName() << "'s wounds *" << RESET << std::endl;
}