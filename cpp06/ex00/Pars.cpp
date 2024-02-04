#include "inc/Pars.hpp"
#include "inc/utils.hpp"
#include <string>
#include <iomanip>

// Default constructor
Pars::Pars() : _str(""), _type(none){
	return;
}

Pars::Pars(std::string str) :  _str(str), _type(none){
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

bool Pars::isChar(){
	if (str_ischar(_str))
		return (_type = charType, true);
	return (false);
}

bool Pars::isInt(){
	if (str_isint(_str))
		return (_type = intType, true);
	return (false);
}

bool Pars::isFloat(){
	if (str_isfloat(_str))
		return (_type = floatType, true);
	return (false);
}

bool Pars::isDouble(){
	if (str_isdouble(_str))
		return (_type = doubleType, true);
	return (false);
}

void Pars::setType(){
	isChar();
	isInt();
	isFloat();
	isDouble();
	switch (_type)
	{
		case none:
			break;
		case charType:
			convertChar();
			break;
		case intType:
			break;

		case floatType:
			break;
		case doubleType:
			convertDouble();
			break;
		default:
			break;
	}
}

void Pars::convertChar(){
	try{
		_charValue = _str[0];
		std::cout << "char : " << _charValue << "\n";
	}
	catch(const std::exception& e){
		std::cout << "char : " << "impossible" << "\n";
	}
	try{
		_intValue = static_cast<int>(_charValue);
		std::cout << "int : " << _intValue << "\n";
	}
	catch(const std::exception& e){
		std::cout << "int : " << "impossible" << "\n";
	}
	try{
		_floatValue = static_cast<float>(_charValue);
		std::cout << "float : " << std::fixed << std::setprecision(1) << _floatValue << "f\n";
	}
	catch(const std::exception& e){
		std::cout << "float : " << "impossible" << "\n";
	}
	try{
		_doubleValue = static_cast<float>(_charValue);
		std::cout << "double : " << std::fixed << std::setprecision(2) << _doubleValue << "\n";
	}
	catch(const std::exception& e){
		std::cout << "double : " << "impossible" << "\n";
	}
}

void Pars::convertDouble(){

	
}


