#include "inc/Cat.hpp"
#include "inc/colors.hpp"
#include <iostream>

// Default constructor
Cat::Cat() {
	_type = "Cat";
	std::cout << MAGENTA << "Cat default constructor as been called" << RESET << std::endl;
	return;
}

// Copy constructor
Cat::Cat(const Cat &other) {
	*this = other;
	std::cout << MAGENTA << "Cat copy constructor as been called" << RESET << std::endl;
	return;
}

// Copy assignment overload
Cat &Cat::operator=(const Cat &rhs) {
	(void)rhs;
	std::cout << MAGENTA << "Cat copy assignment overload as been called" << RESET << std::endl;
	return *this;
}

// Default destructor
Cat::~Cat() {
	std::cout << MAGENTA << "Cat default deconstructor as been called" << RESET << std::endl;
	return;
}

void Cat::makeSound() const{
	std::cout << YELLOW << "Miaou !" << RESET << std::endl;
	return;
}