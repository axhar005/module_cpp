#include "inc/Fixed.hpp"
#include <iostream>
#include <cmath>

// Default constructor
Fixed::Fixed() 	: _value(0){
}

Fixed::Fixed(int const num) : _value(num << _base){
}

Fixed::Fixed(float const num) : _value(std::round(num * (1 << _base))){
}

// Copy constructor
Fixed::Fixed(const Fixed &other){
	*this = other;
}

// Copy assignment overload
Fixed &Fixed::operator=(const Fixed &rhs){
	_value = rhs.getRawBits();
	return *this;
}

// Copy assignment overload
Fixed Fixed::operator-(const Fixed &rhs) const{
	Fixed result;
	result.setRawBits(this->_value - rhs.getRawBits());
	return result;
}

// Copy assignment overload
Fixed Fixed::operator+(const Fixed &rhs) const{
	Fixed result;
	result.setRawBits(this->_value + rhs.getRawBits());
	return result;
}

// Copy assignment overload
Fixed Fixed::operator*(const Fixed &rhs) const{
	Fixed result;
	result.setRawBits(this->_value * rhs.getRawBits() >> this->_base);
	return result;
}

// Copy assignment overload
Fixed Fixed::operator/(const Fixed &rhs) const{
	Fixed result;
	result.setRawBits(this->_value * (1 << this->_base) / rhs.getRawBits());
	return result;
}

// Copy assignment overload
Fixed &Fixed::operator--(){
	--_value;
	return *this;
}

// Copy assignment overload
Fixed Fixed::operator--(int){
	Fixed copy = *this;
	_value--;
	return copy;
}

// Copy assignment overload
Fixed &Fixed::operator++(){
	++_value;
	return *this;
}

// Copy assignment overload
Fixed Fixed::operator++(int){
	Fixed copy = *this;
	_value++;
	return copy;
}

bool Fixed::operator==(const Fixed &rhs) const{
	return (this->toFloat() == rhs.toFloat());
}

bool Fixed::operator!=(const Fixed &rhs) const{
	return (this->toFloat() != rhs.toFloat());
}

bool Fixed::operator<=(const Fixed &rhs) const{
	return (this->toFloat() <= rhs.toFloat());
}

bool Fixed::operator>=(const Fixed &rhs) const{
	return (this->toFloat() >= rhs.toFloat());
}

bool Fixed::operator<(const Fixed &rhs) const{
	return (this->toFloat() < rhs.toFloat());
}

bool Fixed::operator>(const Fixed &rhs) const{
	return (this->toFloat() > rhs.toFloat());
}

std::ostream &operator<<(std::ostream &out, const Fixed &fixed){
	out << fixed.toFloat();
	return out;
}

// Default destructor
Fixed::~Fixed() {
	return;
}

// function

Fixed &Fixed::min(Fixed &a, Fixed &b){
	return (a < b ? a : b);
}

const Fixed &Fixed::min(Fixed const &a, Fixed const &b){
	return (a < b ? a : b);
}

Fixed &Fixed::max(Fixed &a, Fixed &b){
	return (a > b ? a : b);
}

const Fixed &Fixed::max(Fixed const &a, Fixed const &b){
	return (a > b ? a : b);
}

int Fixed::getRawBits(void) const{
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