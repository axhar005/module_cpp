#include "inc/WrongAnimal.hpp"
#include "inc/colors.hpp"
#include <iostream>

// Default constructor
WrongAnimal::WrongAnimal(){
	std::cout << MAGENTA << "WrongAnimal default constructor as been called" << RESET << std::endl;
	return;
}

// Copy constructor
WrongAnimal::WrongAnimal(const WrongAnimal &other){
	*this = other;
	std::cout << MAGENTA << "WrongAnimal copy constructor as been called" << RESET << std::endl;
	return;
}

// Copy assignment overload
WrongAnimal &WrongAnimal::operator=(const WrongAnimal &rhs){
	(void)rhs;
	std::cout << MAGENTA << "WrongAnimal copy assignment overload as been called" << RESET << std::endl;
	return *this;
}

// Default destructor
WrongAnimal::~WrongAnimal(){
	std::cout << MAGENTA << "WrongAnimal default deconstructor as been called" << RESET << std::endl;
	return;
}

std::string WrongAnimal::getType() const{
	return (_type);
}

void WrongAnimal::makeSound() const{
	return;
}