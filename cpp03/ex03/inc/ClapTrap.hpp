#ifndef CLAPTRAP_HPP_
#define CLAPTRAP_HPP_
#include <iostream>
#include <string>

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
	void low(std::string func);
	void stats(void);

protected:
	std::string _name;
	int _hp;
	int _ep;
	int _ad;
};

#endif // CLAPTRAP_HPP_