#include "inc/colors.hpp"
#include "inc/ClapTrap.hpp"
#include <iostream>

// Default constructor
ClapTrap::ClapTrap() : _name("Default"), _hp(10), _ep(10), _ad(0){
	std::cout << MAGENTA << "ClapTrap default constructor as been called" << RESET << std::endl;
	return;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hp(10), _ep(10), _ad(0){
	std::cout << MAGENTA << "ClapTrap constructor as been called" << RESET << std::endl;
	return;
}

// Copy constructor
ClapTrap::ClapTrap(const ClapTrap &other) {
	*this = other;
	std::cout << MAGENTA << "ClapTrap copy constructor as been called" << RESET << std::endl;
	return;
}

// Copy assignment overload
ClapTrap &ClapTrap::operator=(const ClapTrap &rhs) {
	_name = rhs._name;
	_hp = rhs._hp;
	_ep = rhs._ep;
	_ad = rhs._ad;
	std::cout << MAGENTA << "ClapTrap copy assignment overload as been called" << RESET << std::endl;
	return *this;
}

// Default destructor
ClapTrap::~ClapTrap() {
	std::cout << MAGENTA << "ClapTrap deconstructor as been called" << RESET << std::endl;
	return;
}

// Function
void ClapTrap::low(std::string func){
	if (_hp <= 0)
		std::cout << YELLOW "ClapTrap " << _name << " no HP left!" << " for -> "<< func << RESET << std::endl;
	else if (_ep <= 0)
		std::cout << YELLOW "ClapTrap " << _name << " no POWER left!" << " for -> "<< func << RESET << std::endl;
	else if (_ep <= 0 && _hp <= 0)
		std::cout << YELLOW "ClapTrap " << _name << " no POWER and HP left!" << " for -> "<< func << RESET << std::endl;
}

void ClapTrap::stats(void){
	std::cout << GREEN "ClapTrap " << _name << " Stats: HP: " << _hp << " EP: " << _ep << RESET << std::endl;
}

void ClapTrap::attack(const std::string& target){
	if (_hp > 0 && _ep > 0){
		_ep--;
		std::cout << YELLOW "ClapTrap " << _name << " attacks " << target << ", causing "<< _ad << " points of damage!" << RESET << std::endl;
	}
	else
		low("attack");
}

void ClapTrap::takeDamage(unsigned int amount){
	if (_hp > 0){
		_hp -= amount;
		std::cout << YELLOW "ClapTrap " << _name << " take " << amount << " damage, " << _hp << " HP left!"<< RESET << std::endl;
	}
	else
		low("takeDamage");
}

void ClapTrap::beRepaired(unsigned int amount){
	if (_ep > 0){
		_hp += amount;
		_ep--;
		std::cout << YELLOW "ClapTrap " << _name << " repair " << amount << " of hp!" << RESET << std::endl;
	}
	else
		low("beRepaired");
}