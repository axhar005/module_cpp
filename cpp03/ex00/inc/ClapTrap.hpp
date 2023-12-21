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

private:
	std::string _name;
	int hp;
	int ep;
	int ad;


};

#endif // CLAPTRAP_HPP_