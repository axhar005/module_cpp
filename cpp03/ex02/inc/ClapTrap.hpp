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
	virtual void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	void low(std::string func);
	void stats(void);
	std::string getName(void) const;
	int getHp(void) const;
	int getEp(void) const;
	int getAd(void) const;
	void setName(std::string name);
	void setHp(int amount);
	void setEp(int amount);
	void setAd(int amount);

private:
	std::string _name;
	int _hp;
	int _ep;
	int _ad;
};

#endif // CLAPTRAP_HPP_