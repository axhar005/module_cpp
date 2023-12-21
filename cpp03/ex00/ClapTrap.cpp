#include "inc/ClapTrap.hpp"
#include "inc/colors.hpp"
#include <iostream>

// Default constructor
ClapTrap::ClapTrap() : _hp(10), _ep(10), _ad(0){
	return;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hp(10), _ep(10), _ad(0){
	return;
}

// Copy constructor
ClapTrap::ClapTrap(const ClapTrap &other) {
	*this = other;
	return;
}

// Copy assignment overload
ClapTrap &ClapTrap::operator=(const ClapTrap &rhs) {
	(void)rhs;
	return *this;
}

// Default destructor
ClapTrap::~ClapTrap() {
	return;
}

// Function
void ClapTrap::attack(const std::string& target){
	if (_hp > 0 || _ep > 0)
		std::cout << YELLOW "ClapTrap " << _name << " attacks " << target << ", causing "<< _ad << " points of damage!" << RESET << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount){
	if (_hp > 0 || _ep > 0){
		_hp -= amount;
		std::cout << YELLOW "ClapTrap " << _name << " take " << amount << " damage, " << _hp << " HP left!"<< RESET << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount){
	if (_hp > 0 || _ep > 0){
		_hp += amount;
		std::cout << YELLOW "ClapTrap " << _name << " get " << amount << " of hp, " << _hp << " HP now" << RESET << std::endl;
	}
}