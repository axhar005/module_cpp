#ifndef FRAGTRAP_HPP_
#define FRAGTRAP_HPP_

#include "ClapTrap.hpp"

// Class declaration
class FragTrap : public ClapTrap{
public:
	FragTrap();	// Default constructor
	FragTrap(std::string name);
	FragTrap(const FragTrap &other); // Copy constructor
	FragTrap &operator=(const FragTrap &rhs);	// Copy assignment overload
	~FragTrap();	// Default destructor
	void highFivesGuys(void);
	void attack(const std::string& target);

private:

};

#endif // FRAGTRAP_HPP_