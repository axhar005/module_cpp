#include "inc/Pars.hpp"
#include "inc/utils.hpp"
#include <string>

// Default constructor
Pars::Pars() : _type(none){
	return;
}

// Copy constructor
Pars::Pars(const Pars &other) {
	*this = other;
	return;
}

// Copy assignment overload
Pars &Pars::operator=(const Pars &rhs) {
	(void)rhs;
	return *this;
}

// Default destructor
Pars::~Pars() {
	return;
}

bool Pars::isChar(std::string str){
	if (str_ischar(str))
		return (_type = charType, true);
	return (false);
}

bool Pars::isInt(std::string str){
	if (str_isint(str))
		return (_type = intType, true);
	return (false);
}

bool Pars::isFloat(std::string str){
	if (str_isfloat(str))
		return (_type = floatType, true);
	return (false);
}

