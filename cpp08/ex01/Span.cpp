#include "inc/Span.hpp"

// Default constructor
Span::Span() {
	return;
}

// Copy constructor
Span::Span(const Span &other) {
	*this = other;
	return;
}

// Copy assignment overload
Span &Span::operator=(const Span &rhs) {
	(void)rhs;
	return *this;
}

// Default destructor
Span::~Span() {
	return;
}