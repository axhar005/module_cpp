#include "inc/WrongCat.hpp"
#include "inc/colors.hpp"
#include <iostream>

// Default constructor
WrongCat::WrongCat() {
	_type = "WrongCat";
	std::cout << MAGENTA << "WrongCat default constructor as been called" << RESET << std::endl;
	return;
}

// Copy constructor
WrongCat::WrongCat(const WrongCat &other) {
	*this = other;
	std::cout << MAGENTA << "WrongCat copy constructor as been called" << RESET << std::endl;
	return;
}

// Copy assignment overload
WrongCat &WrongCat::operator=(const WrongCat &rhs) {
	(void)rhs;
	std::cout << MAGENTA << "WrongCat copy assignment overload as been called" << RESET << std::endl;
	return *this;
}

// Default destructor
WrongCat::~WrongCat() {
	std::cout << MAGENTA << "WrongCat default deconstructor as been called" << RESET << std::endl;
	return;
}

void WrongCat::makeSound() const{
	std::cout << YELLOW << "Miaou !" << RESET << std::endl;
	return;
}