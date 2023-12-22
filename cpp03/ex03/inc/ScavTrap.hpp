#ifndef SCAVTRAP_HPP_
#define SCAVTRAP_HPP_

#include "ClapTrap.hpp"

// Class declaration
class ScavTrap : public ClapTrap{
public:
	ScavTrap();	// Default constructor
	ScavTrap(std::string name);
	ScavTrap(const ScavTrap &other); // Copy constructor
	ScavTrap &operator=(const ScavTrap &rhs);	// Copy assignment overload
	~ScavTrap();	// Default destructor
	void guardGate(void);
	void attack(const std::string& target);
};

#endif // SCAVTRAP_HPP_