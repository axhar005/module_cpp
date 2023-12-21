#ifndef CLAPTRAP_HPP_
#define CLAPTRAP_HPP_
#include <iostream>

// Class declaration
class ClapTrap {
public:
	ClapTrap();	// Default constructor
	ClapTrap(std::string name);
	ClapTrap(const ClapTrap &other); // Copy constructor
	ClapTrap &operator=(const ClapTrap &rhs);	// Copy assignment overload
	~ClapTrap();	// Default destructor
	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

private:
	std::string _name;
	int _hp;
	int _ep;
	int _ad;


};

#endif // CLAPTRAP_HPP_