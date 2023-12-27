#include "inc/Dog.hpp"
#include "inc/colors.hpp"
#include <typeinfo>

// Default constructor
Dog::Dog(){
	_type = "Dog";
	std::cout << MAGENTA << "Dog default constructor as been called" << RESET << std::endl;
	return;
}

// Copy constructor
Dog::Dog(const Dog &other){
	*this = other;
	std::cout << MAGENTA << "Dog copy constructor as been called" << RESET << std::endl;
	return;
}

// Copy assignment overload
Dog &Dog::operator=(const Dog &rhs){
	(void)rhs;
	std::cout << MAGENTA << "Dog copy assignment overload as been called" << RESET << std::endl;
	return *this;
}

// Default destructor
Dog::~Dog(){
	std::cout << MAGENTA << "Dog default deconstructor as been called" << RESET << std::endl;
	return;
}

void Dog::makeSound() const{
	std::cout << YELLOW << "Woaf !" << RESET << std::endl;
	return;
}