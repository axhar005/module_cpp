#ifndef FIXED_HPP_
#define FIXED_HPP_

#include <iostream>
#include <string>
#include <cmath>

// Class declaration
class Fixed {
public:
	Fixed();	// Default constructor
	Fixed(int const raw);
	Fixed(float const raw);
	Fixed(const Fixed &other);	// Copy constructor
	Fixed &operator=(const Fixed &rhs);	// Copy assignment overload
	~Fixed();	// Default destructor
	int getRawBits( void ) const;
	void setRawBits( int const raw );
	int toInt(void) const;
	float toFloat(void) const;

private:
	int _value;
	static const int _base = 8;

};

std::ostream &operator<<(std::ostream &out, const Fixed &fixed);

#endif // FIXED_HPP_