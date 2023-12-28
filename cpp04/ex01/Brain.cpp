#include "inc/Brain.hpp"
#include "inc/colors.hpp"
#include <regex>

// Default constructor
Brain::Brain() {
	std::cout << RED << "Brain default constructor as been called" << RESET << std::endl;
	return;
}

// Copy constructor
Brain::Brain(const Brain &other) {
	*this = other;
	std::cout << RED << "Brain copy constructor as been called" << RESET << std::endl;
	return;
}

// Copy assignment overload
Brain &Brain::operator=(const Brain &rhs) {
	for (int i = 0; i < 100; i++) {
		_idea[i] = rhs._idea[i];
	}
	std::cout << RED << "Brain copy assignment overload as been called" << RESET << std::endl;
	return *this;
}

// Default destructor
Brain::~Brain() {
	std::cout << RED << "Brain default deconstructor as been called" << RESET << std::endl;
	return;
}

// Function
void Brain::setIdea(int i, std::string str){
	_idea[i] = str;
}

std::string Brain::getIdea(int i){
	return _idea[i];
}