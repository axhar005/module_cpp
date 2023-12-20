#include "inc/Point.hpp"

// Default constructor
Point::Point() : _x(0), _y(0){
	return;
}

Point::Point(const float x, const float y) : _x(x), _y(y){
	return;
}

// Copy constructor
Point::Point(const Point &other) {
	*this = other;
	return;
}

// Copy assignment overload
Point &Point::operator=(const Point &rhs) {
	(void)rhs;
	return *this;
}

// Default destructor
Point::~Point() {
	return;
}

// function
const Fixed &Point::getX(void) const{
	return (_x);
}

const Fixed &Point::getY(void) const{
	return (_y);
}