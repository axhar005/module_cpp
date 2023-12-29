#ifndef CAT_HPP_
#define CAT_HPP_

#include "Animal.hpp"

// Class declaration
class Cat : virtual public Animal{
public:
	Cat();	// Default constructor
	Cat(const Cat &other); // Copy constructor
	Cat &operator=(const Cat &rhs);	// Copy assignment overload
	~Cat();	// Default destructor
	void makeSound() const;
	void setIdea(int i, std::string idea);
	std::string getIdea(int i);

private:
	Brain	*_brain;
};

#endif // CAT_HPP_