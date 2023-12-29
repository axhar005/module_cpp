#include "inc/Cat.hpp"
#include "inc/Brain.hpp"
#include "inc/colors.hpp"
#include <iostream>

// Default constructor
Cat::Cat() {
	_type = "Cat";
	std::cout << CYAN << "Cat default constructor as been called" << RESET << std::endl;
	_brain = new Brain;
	return;
}

// Copy constructor
Cat::Cat(const Cat &other) {
	*this = other;
	std::cout << CYAN << "Cat copy constructor as been called" << RESET << std::endl;
	return;
}

// Copy assignment overload
Cat &Cat::operator=(const Cat &rhs) {
	this->_brain = new Brain(*rhs._brain);
	std::cout << CYAN << "Cat copy assignment overload as been called" << RESET << std::endl;
	return *this;
}

// Default destructor
Cat::~Cat() {
	delete _brain;
	std::cout << CYAN << "Cat default deconstructor as been called" << RESET << std::endl;
	return;
}

void Cat::makeSound() const{
	std::cout << YELLOW << "Miaou !" << RESET << std::endl;
	return;
}

void Cat::setIdea(int i, std::string idea){
	_brain->setIdea(i, idea);
}

std::string Cat::getIdea(int i){
	return _brain->getIdea(i);
}