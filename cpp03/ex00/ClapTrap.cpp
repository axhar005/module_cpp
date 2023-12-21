#include "inc/ClapTrap.hpp"

// Default constructor
ClapTrap::ClapTrap() : _hp(10), _ep(10), _ap(0){
	return;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hp(10), _ep(10), _ap(0){
	return;
}

// Copy constructor
ClapTrap::ClapTrap(const ClapTrap &other) {
	*this = other;
	return;
}

// Copy assignment overload
ClapTrap &ClapTrap::operator=(const ClapTrap &rhs) {
	(void)rhs;
	return *this;
}

// Default destructor
ClapTrap::~ClapTrap() {
	return;
}