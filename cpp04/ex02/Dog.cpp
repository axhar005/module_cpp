#include "inc/Dog.hpp"
#include "inc/colors.hpp"
#include <typeinfo>

// Default constructor
Dog::Dog(){
	_type = "Dog";
	std::cout << GREEN << "Dog default constructor as been called" << RESET << std::endl;
	_brain = new Brain;
	return;
}

// Copy constructor
Dog::Dog(const Dog &other){
	*this = other;
	std::cout << GREEN << "Dog copy constructor as been called" << RESET << std::endl;
	return;
}

// Copy assignment overload
Dog &Dog::operator=(const Dog &rhs){
	this->_brain = new Brain(*rhs._brain);
	std::cout << GREEN << "Dog copy assignment overload as been called" << RESET << std::endl;
	return *this;
}

// Default destructor
Dog::~Dog(){
	delete _brain;
	std::cout << GREEN << "Dog default deconstructor as been called" << RESET << std::endl;
	return;
}

void Dog::makeSound() const{
	std::cout << YELLOW << "Woaf !" << RESET << std::endl;
	return;
}

void Dog::setIdea(int i, std::string idea){
	_brain->setIdea(i, idea);
}

std::string Dog::getIdea(int i){
	return _brain->getIdea(i);
}