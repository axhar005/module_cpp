#include "inc/Brain.hpp"

// Default constructor
Brain::Brain() {
	return;
}

// Copy constructor
Brain::Brain(const Brain &other) {
	*this = other;
	return;
}

// Copy assignment overload
Brain &Brain::operator=(const Brain &rhs) {
	(void)rhs;
	return *this;
}

// Default destructor
Brain::~Brain() {
	return;
}