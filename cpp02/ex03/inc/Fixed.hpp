#ifndef FIXED_HPP_
#define FIXED_HPP_

#include <iostream>

// Class declaration
class Fixed {
public:
	Fixed();	// Default constructor
	Fixed(int const raw);
	Fixed(float const raw);
	Fixed(const Fixed &other);	// Copy constructor
	Fixed &operator=(const Fixed &rhs);	// Copy assignment overload
	Fixed operator-(const Fixed &rhs) const;
	Fixed operator+(const Fixed &rhs) const;
	Fixed operator*(const Fixed &rhs) const;
	Fixed operator/(const Fixed &rhs) const;
	Fixed &operator--();
	Fixed operator--(int);
	Fixed &operator++();
	Fixed operator++(int);
	bool operator==(const Fixed &rhs) const;
	bool operator!=(const Fixed &rhs) const;
	bool operator<=(const Fixed &rhs) const;
	bool operator>=(const Fixed &rhs) const;
	bool operator<(const Fixed &rhs) const;
	bool operator>(const Fixed &rhs) const;
	~Fixed();	// Default destructor
	int getRawBits( void ) const;
	void setRawBits( int const raw );
	int toInt(void) const;
	float toFloat(void) const;
	static Fixed &min(Fixed &a, Fixed &b);
	static const Fixed &min(Fixed const &a, Fixed const &b);
	static Fixed &max(Fixed &a, Fixed &b);
	static const Fixed &max(Fixed const &a, Fixed const &b);

private:
	int _value;
	static const int _base = 8;

};

std::ostream &operator<<(std::ostream &out, const Fixed &fixed);

#endif // FIXED_HPP_