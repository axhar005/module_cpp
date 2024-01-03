#include "inc/AMateria.hpp"

// Default constructor
AMateria::AMateria() {
	return;
}

// Copy constructor
AMateria::AMateria(const AMateria &other) {
	*this = other;
	return;
}

// Copy assignment overload
AMateria &AMateria::operator=(const AMateria &rhs) {
	this->_type = rhs._type;
	return *this;
}

// Default destructor
AMateria::~AMateria() {
	return;
}

std::string const &AMateria::getType() const{
	return this->_type;
}