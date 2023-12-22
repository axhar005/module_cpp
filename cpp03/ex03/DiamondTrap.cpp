#include "inc/DiamondTrap.hpp"

// Default constructor
DiamondTrap::DiamondTrap() {
	return;
}

// Copy constructor
DiamondTrap::DiamondTrap(const DiamondTrap &other) {
	*this = other;
	return;
}

// Copy assignment overload
DiamondTrap &DiamondTrap::operator=(const DiamondTrap &rhs) {
	(void)rhs;
	return *this;
}

// Default destructor
DiamondTrap::~DiamondTrap() {
	return;
}