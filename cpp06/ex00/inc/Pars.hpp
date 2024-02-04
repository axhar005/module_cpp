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
	Pars(const Pars &other); // Copy constructor
	Pars &operator=(const Pars &rhs); // Copy assignment overload
	~Pars(); // Default destructor
	bool isChar(std::string str);
	bool isInt(std::string str);
	bool isFloat(std::string str);
	bool isDouble(std::string str);

private:
	int _type;


};

#endif // PARS_HPP_