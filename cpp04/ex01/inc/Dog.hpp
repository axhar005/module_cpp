#ifndef DOG_HPP_
#define DOG_HPP_

#include "Animal.hpp"

// Class declaration
class Dog : virtual public Animal{
public:
	Dog();	// Default constructor
	Dog(const Dog &other); // Copy constructor
	Dog &operator=(const Dog &rhs);	// Copy assignment overload
	~Dog();	// Default destructor
	void makeSound() const;

};

#endif // DOG_HPP_