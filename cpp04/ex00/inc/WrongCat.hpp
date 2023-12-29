#ifndef WRONGCAT_HPP_
#define WRONGCAT_HPP_

#include "WrongAnimal.hpp"

// Class declaration
class WrongCat : public WrongAnimal{
public:
	WrongCat();	// Default constructor
	WrongCat(const WrongCat &other); // Copy constructor
	WrongCat &operator=(const WrongCat &rhs);	// Copy assignment overload
	~WrongCat();	// Default destructor
	void makeSound() const;
};

#endif // WRONGCAT_HPP_