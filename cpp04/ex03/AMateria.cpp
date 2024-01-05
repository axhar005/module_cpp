#include "inc/AMateria.hpp"
#include "inc/colors.hpp"
#include <iostream>

// Default constructor
AMateria::AMateria() : _type("Materia"){
	if (CALL)
		std::cout << MAGENTA << "AMateria Default Constructor as been called" << RESET << std::endl;
	return;
}

AMateria::AMateria(std::string const & type) : _type(type){
	if (CALL)
		std::cout << MAGENTA << "AMateria Constructor as been called" << RESET << std::endl;
	return;
}

// Copy constructor
AMateria::AMateria(const AMateria &other) {
	if (CALL)
		std::cout << MAGENTA << "AMateria Copy Constructor as been called" << RESET << std::endl;
	*this = other;
	return;
}

// Copy assignment overload
AMateria &AMateria::operator=(const AMateria &rhs) {
	if (CALL)
		std::cout << MAGENTA << "AMateria Copy Assignment Overload as been called" << RESET << std::endl;
	this->_type = rhs._type;
	return *this;
}

// Default destructor
AMateria::~AMateria() {
	if (CALL)
		std::cout << MAGENTA << "AMateria Deconstructor as been called" << RESET << std::endl;
	return;
}

std::string const &AMateria::getType() const{
	return this->_type;
}

void AMateria::use(ICharacter& target){
	std::cout << GREEN << "Amateria use on " << target.getName() << RESET << std::endl;
}