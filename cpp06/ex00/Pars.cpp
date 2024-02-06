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

// Function

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

bool Pars::isSpecial(){
	std::string special[] = {"nan", "nanf", "-inf", "-inff", "+inf", "+inff"};
	for (int i = 0; i < 6; i++)
		if (special[i] == _str)
			return (_type = specialType, true);
	return (false);
}

void Pars::setType(){
	isChar();
	isInt();
	isFloat();
	isDouble();
	isSpecial();
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
		case specialType:
			convertSpecial();
			break;
		default:
			std::cout << RED "error: wrong argument\n" RESET;
			break;
	}
}

void Pars::convertChar(){
	char temp = _str[0];
	if (temp > 32 && temp < 127 && !isdigit(temp)){
		_charValue = temp;
		std::cout << "char : '" << _charValue << "'\n";
	}else{
		std::cout << "char : " << YELLOW "Not displayable\n" RESET;
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
		std::cout << "char : " << YELLOW "Not displayable\n" RESET;
	}else{
		std::cout << "char : " << RED "impossible\n" RESET;
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
		std::cout << "char : " << YELLOW "Not displayable\n" RESET;
	}else{
		std::cout << "char : " << RED "impossible\n" RESET;
	}
	if (temp <= INT_MAX){
		_intValue = static_cast<int>(temp);
		std::cout << "int : " << _intValue << "\n";
	}else{
		std::cout << "int : " << RED "impossible\n" RESET;
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
		std::cout << "char : " << YELLOW "Not displayable\n" RESET;
	}else{
		std::cout << "char : " << RED "impossible\n" RESET;
	}
	if (temp <= INT_MAX){
		_intValue = static_cast<int>(temp);
		std::cout << "int : " << _intValue << "\n";
	}else{
		std::cout << "int : " << RED "impossible\n" RESET;
	}
	if (temp <= std::numeric_limits<float>::max()){
		_floatValue = static_cast<float>(temp);
		std::cout << "float : " << std::fixed << std::setprecision(1) << _floatValue << "f\n";
	}else{
		std::cout << "float : " << RED "impossible\n" RESET;
	}
	_doubleValue = temp;
	std::cout << "double : " << std::fixed << std::setprecision(2) << _doubleValue << "\n";
}

void Pars::convertSpecial(){
	std::cout << "char : " << RED "impossible\n" RESET;
	std::cout << "int : " << RED "impossible\n" RESET;
	if (_str == "nan" || _str == "nanf"){
		std::cout << "float : nanf\n";
		std::cout << "double : nan\n";
	}else if (_str == "-inf" || _str == "+inf"){
		std::cout << "float : " << _str + "f" << "\n";
		std::cout << "double : " << _str << "\n";
	}else{
		std::cout << "float : " << _str << "\n";
		std::cout << "double : " << _str.substr(0, _str.length() -1) << "\n";
	}
}

