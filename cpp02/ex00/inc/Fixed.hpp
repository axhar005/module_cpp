#ifndef FIXED_HPP_
#define FIXED_HPP_

// Class declaration
class Fixed {
public:
	Fixed();	// Default constructor
	Fixed(const Fixed &other);	// Copy constructor
	Fixed &operator=(const Fixed &rhs);	// Copy assignment overload
	~Fixed();	// Default destructor
	int getRawBits( void ) const;
	void setRawBits( int const raw );

private:
	int _value;
	static const int _base = 8;

};

#endif // FIXED_HPP_