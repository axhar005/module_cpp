#include "inc/Fixed.hpp"
#include "inc/colors.hpp"
#include <iostream>

// Default constructor
Fixed::Fixed() 	: _value(0){
	std::cout << GREEN << "Default constructor called" << RESET << std::endl;
}

Fixed::Fixed(int const num) : _value(num << _base) {
	std::cout << CYAN << "Int constructor called" << RESET << std::endl;
}

Fixed::Fixed(float const num) : _value(std::round(num * (1 << _base))) {
	std::cout << MAGENTA <<"Float constructor called" << RESET << std::endl;
}

// Copy constructor
Fixed::Fixed(const Fixed &other) {
	std::cout << BLUE << "Copy constructor called" << RESET << std::endl;
	*this = other;
}

// Copy assignment overload
Fixed &Fixed::operator=(const Fixed &rhs) {
	std::cout << YELLOW << "Copy assignment operator called" << RESET << std::endl;
	_value = rhs.getRawBits();
	return *this;
}

std::ostream &operator<<(std::ostream &out, const Fixed &fixed) {
	out << fixed.toFloat();
	return out;
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

int Fixed::toInt(void) const{
	return (_value >> _base);
}

float Fixed::toFloat(void) const{
	return ((float)_value / (1 << _base));
}
