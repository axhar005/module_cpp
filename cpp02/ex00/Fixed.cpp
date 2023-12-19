#include "inc/Fixed.hpp"
#include "inc/colors.hpp"
#include <iostream>

// Default constructor
Fixed::Fixed() 	: _value(0){
	std::cout << GREEN << "Default constructor called" << RESET << std::endl;
	return;
}

// Copy constructor
Fixed::Fixed(const Fixed &other) {
	std::cout << BLUE << "Copy constructor called" << RESET << std::endl;
	*this = other;
	return;
}

// Copy assignment overload
Fixed &Fixed::operator=(const Fixed &rhs) {
	std::cout << YELLOW << "Copy assignment operator called" << RESET << std::endl;
	_value = rhs.getRawBits();
	return *this;
}

// Default destructor
Fixed::~Fixed() {
	std::cout << RED << "Destructor called" << RESET << std::endl;
	return;
}

int Fixed::getRawBits(void) const{
	std::cout << MAGENTA << "getRawBits member function called" << RESET << std::endl;
	return (_value);
}

void Fixed::setRawBits(int const raw){
	_value = raw;
}
