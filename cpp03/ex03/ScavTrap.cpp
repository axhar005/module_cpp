#include "inc/ScavTrap.hpp"
#include "inc/colors.hpp"

// Default constructor
ScavTrap::ScavTrap() : ClapTrap(){
	this->_hp = 100;
	this->_ep = 50;
	this->_ad = 20;
	std::cout << MAGENTA << "ScavTrap default constructor as been called" << RESET << std::endl;
	return;
}

// Default constructor
ScavTrap::ScavTrap(std::string name) : ClapTrap(name){
	this->_hp = 100;
	this->_ep = 50;
	this->_ad = 20;
	std::cout << MAGENTA << "ScavTrap constructor as been called" << RESET << std::endl;
	return;
}

// Copy constructor
ScavTrap::ScavTrap(const ScavTrap &other) {
	*this = other;
	std::cout << MAGENTA << "ScavTrap copy constructor as been called" << RESET << std::endl;
	return;
}

// Copy assignment overload
ScavTrap &ScavTrap::operator=(const ScavTrap &rhs) {
	this->_hp = rhs._hp;
	this->_ep = rhs._ep;
	this->_ad = rhs._ad;
	std::cout << MAGENTA << "ScavTrap copy assignment overload as been called" << RESET << std::endl;
	return *this;
}

// Default destructor
ScavTrap::~ScavTrap() {
	std::cout << MAGENTA << "ScavTrap deconstructor as been called" << RESET << std::endl;
	return;
}

void ScavTrap::guardGate(void){
	if (this->_hp > 0 && this->_ep > 0){
		this->_ep--;
		std::cout << RED << "ScavTrap " << this->_name << " enter in gate keeper mode!" << RESET << std::endl;
	}
	else
		low("guardGate");
}

void ScavTrap::attack(const std::string& target){
	if (this->_hp > 0 && this->_ep > 0){
		this->_ep--;
		std::cout << YELLOW "ScavTrap " << this->_name << " attacks " << target << ", causing "<< this->_ad << " points of damage!" << RESET << std::endl;
	}
	else
		low("attack");
}