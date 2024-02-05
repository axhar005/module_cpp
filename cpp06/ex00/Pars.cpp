#include "inc/Pars.hpp"
#include "inc/utils.hpp"
#include "inc/colors.hpp"
#include <string>
#include <iomanip>
#include <limits>

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
		case charType:
			convertChar();
			break;
		case intType:
			convertInt();
			break;
		case floatType:
			convertFloat();
			break;
		case doubleType:
			convertDouble();
			break;
		default:
			std::cout << RED << "error: wrong argument\n";
			break;
	}
}

void Pars::convertChar(){
	char temp = _str[0];
	if (temp > 32 && temp < 127 && !isdigit(temp)){
		_charValue = temp;
		std::cout << "char : '" << _charValue << "'\n";
	}else{
		std::cout << "char : " << "Not displayable\n";
	}
	_intValue = static_cast<int>(temp);
	std::cout << "int : " << _intValue << "\n";
	_floatValue = static_cast<float>(temp);
	std::cout << "float : " << std::fixed << std::setprecision(1) << _floatValue << "f\n";
	_doubleValue = static_cast<double>(temp);
	std::cout << "double : " << std::fixed << std::setprecision(2) << _doubleValue << "\n";
}

void Pars::convertInt(){
	int temp = std::stoi(_str);
	if (temp > 32 && temp < 127 && !isdigit(temp)){
		_charValue = temp;
		std::cout << "char : '" << _charValue << "'\n";
	}else if (isascii(temp)){
		std::cout << "char : " << "Not displayable\n";
	}else{
		std::cout << "char : " << "impossible\n";
	}
	_intValue = temp;
	std::cout << "int : " << _intValue << "\n";
	_floatValue = static_cast<float>(temp);
	std::cout << "float : " << std::fixed << std::setprecision(1) << _floatValue << "f\n";
	_doubleValue = static_cast<double>(temp);
	std::cout << "double : " << std::fixed << std::setprecision(2) << _doubleValue << "\n";
}

void Pars::convertFloat(){
	float temp = std::stof(_str);
	if (temp > 32 && temp < 127 && !isdigit(temp)){
		_charValue = temp;
		std::cout << "char : '" << _charValue << "'\n";
	}else if (isascii(temp)){
		std::cout << "char : " << "Not displayable\n";
	}else{
		std::cout << "char : " << "impossible\n";
	}

	if (temp <= INT_MAX){
		_intValue = static_cast<int>(temp);
		std::cout << "int : " << _intValue << "\n";
	}else{
		std::cout << "int : " << "impossible\n";
	}
	_floatValue = temp;
	std::cout << "float : " << std::fixed << std::setprecision(1) << _floatValue << "f\n";
	_doubleValue = static_cast<double>(temp);
	std::cout << "double : " << std::fixed << std::setprecision(2) << _doubleValue << "\n";
}


void Pars::convertDouble(){
	double temp = std::stod(_str);
	if (temp > 32 && temp < 127 && !isdigit(temp)){
		_charValue = temp;
		std::cout << "char : '" << _charValue << "'\n";
	}else if (isascii(temp)){
		std::cout << "char : " << "Not displayable\n";
	}else{
		std::cout << "char : " << "impossible\n";
	}

	if (temp <= INT_MAX){
		_intValue = static_cast<int>(temp);
		std::cout << "int : " << _intValue << "\n";
	}else{
		std::cout << "int : " << "impossible\n";
	}
	if (temp <= std::numeric_limits<float>::max()){
		_floatValue = static_cast<float>(temp);
		std::cout << "float : " << std::fixed << std::setprecision(1) << _floatValue << "f\n";
	}else{
		std::cout << "float : impossible\n";
	}
	_doubleValue = temp;
	std::cout << "double : " << std::fixed << std::setprecision(2) << _doubleValue << "\n";
}


