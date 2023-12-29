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
	void setIdea(int i, std::string str);
	std::string getIdea(int i);

private:
	std::string _idea[100];

};

#endif // BRAIN_HPP_