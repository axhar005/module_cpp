#ifndef BRAIN_HPP_
#define BRAIN_HPP_

#include <iostream>

// Class declaration
class Brain {
public:
	Brain();	// Default constructor
	Brain(const Brain &other); // Copy constructor
	Brain &operator=(const Brain &rhs);	// Copy assignment overload
	~Brain();	// Default destructor

private:
	std::string 

};

#endif // BRAIN_HPP_