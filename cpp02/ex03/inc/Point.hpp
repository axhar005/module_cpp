#ifndef POINT_HPP_
#define POINT_HPP_

#include "Fixed.hpp"

// Class declaration
class Point {
public:
	Point();	// Default constructor
	Point(const float x, const float y);
	Point(const Point &other); // Copy constructor
	Point &operator=(const Point &rhs);	// Copy assignment overload
	~Point();	// Default destructor
	const Fixed &getX(void) const;
	const Fixed &getY(void) const;

private:
	Fixed const _x;
	Fixed const _y;

};

bool bsp( Point const &a, Point const &b, Point const &c, Point const &point);

#endif // POINT_HPP_