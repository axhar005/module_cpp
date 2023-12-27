#include "inc/Animal.hpp"
#include "inc/colors.hpp"
#include <iostream>

// Default constructor
Animal::Animal(){
	std::cout << MAGENTA << "Animal default constructor as been called" << RESET << std::endl;
	return;
}

// Copy constructor
Animal::Animal(const Animal &other){
	*this = other;
	std::cout << MAGENTA << "Animal copy constructor as been called" << RESET << std::endl;
	return;
}

// Copy assignment overload
Animal &Animal::operator=(const Animal &rhs){
	(void)rhs;
	std::cout << MAGENTA << "Animal copy assignment overload as been called" << RESET << std::endl;
	return *this;
}

// Default destructor
Animal::~Animal(){
	std::cout << MAGENTA << "Animal default deconstructor as been called" << RESET << std::endl;
	return;
}

std::string Animal::getType() const{
	return (_type);
}

void Animal::makeSound() const{
	return;
}