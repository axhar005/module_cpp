#ifndef ANIMAL_HPP_
#define ANIMAL_HPP_

#include "Brain.hpp"
#include <iostream>

// Class declaration
class Animal {
public:
	Animal();	// Default constructor
	Animal(const Animal &other); // Copy constructor
	Animal &operator=(const Animal &rhs);	// Copy assignment overload
	virtual ~Animal();	// Default destructor
	std::string getType() const;
	virtual void makeSound() const;

protected:
	std::string _type;
};

#endif // ANIMAL_HPP_