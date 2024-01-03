#ifndef WRONGANIMAL_HPP_
#define WRONGANIMAL_HPP_

#include <iostream>

// Class declaration
class WrongAnimal {
public:
	WrongAnimal();	// Default constructor
	WrongAnimal(const WrongAnimal &other); // Copy constructor
	WrongAnimal &operator=(const WrongAnimal &rhs);	// Copy assignment overload
	virtual ~WrongAnimal();	// Default destructor
	std::string getType() const;
	void makeSound() const;

protected:
	std::string _type;
};

#endif // WRONGANIMAL_HPP_