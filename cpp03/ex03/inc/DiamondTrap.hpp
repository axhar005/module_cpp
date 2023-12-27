#ifndef DIAMONDTRAP_HPP_
#define DIAMONDTRAP_HPP_

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

// Class declaration
class DiamondTrap : public FragTrap, public ScavTrap{
public:
	DiamondTrap();	// Default constructor
	DiamondTrap(std::string name);
	DiamondTrap(const DiamondTrap &other); // Copy constructor
	DiamondTrap &operator=(const DiamondTrap &rhs);	// Copy assignment overload
	~DiamondTrap();	// Default destructor
	void attack(const std::string& target);
	void whoAmI();

private:
	std::string _name;

};

#endif // DIAMONDTRAP_HPP_