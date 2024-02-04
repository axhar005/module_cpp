#ifndef PARS_HPP_
#define PARS_HPP_

#include <iostream>

enum{
	none,
	charType,
	intType,
	floatType,
	doubleType
};

// Class declaration
class Pars {
public:
	Pars(); // Default constructor
	Pars(std::string str);
	Pars(const Pars &other); // Copy constructor
	Pars &operator=(const Pars &rhs); // Copy assignment overload
	~Pars(); // Default destructor
	bool isChar();
	bool isInt();
	bool isFloat();
	bool isDouble();
	void setType();
	void convertChar();
	void convertInt();
	void convertFloat();
	void convertDouble();

private:
	std::string 	_str;
	int 			_type;
	char			_charValue;
	int				_intValue;
	float 			_floatValue;
	double 			_doubleValue;
};

#endif // PARS_HPP_