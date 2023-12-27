#include "inc/DiamondTrap.hpp"
#include "inc/ClapTrap.hpp"
#include "inc/ScavTrap.hpp"
#include "inc/colors.hpp"


// Default constructor
DiamondTrap::DiamondTrap() : ClapTrap("default_clap_trap"){
	this->_name = "default";
	this->_hp = FragTrap::_hp;
	this->_ep = ScavTrap::_ep;
	this->_ad = FragTrap::_ad;
	std::cout << MAGENTA << "DiamondTrap default constructor as been called" << RESET << std::endl;
	return;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_trap"){
	this->_name = name;
	this->_hp = FragTrap::_hp;
	this->_ep = ScavTrap::_ep;
	this->_ad = FragTrap::_ad;
	return;
}

// Copy constructor
DiamondTrap::DiamondTrap(const DiamondTrap &other) {
	*this = other;
	std::cout << MAGENTA << "DiamondTrap copy constructor as been called" << RESET << std::endl;
	return;
}

// Copy assignment overload
DiamondTrap &DiamondTrap::operator=(const DiamondTrap &rhs) {
	this->_name = rhs._name;
	this->_hp = rhs._hp;
	this->_ep = rhs._ep;
	this->_ad = rhs._ad;
	std::cout << MAGENTA << "DiamondTrap copy assignment overload as been called" << RESET << std::endl;
	return *this;
}

// Default destructor
DiamondTrap::~DiamondTrap() {
	std::cout << MAGENTA << "DiamondTrap deconstructor as been called" << RESET << std::endl;
	return;
}

void DiamondTrap::attack(const std::string& target){
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI(){
	if (_ep > 0 && _hp > 0){
		_ep--;
		std::cout << RED << "Who am i... Who is my father..? " << "You are " << this->_name << " son of " << ClapTrap::_name << RESET << std::endl;
	}
	else {
		low("whoAmI");
	}
}