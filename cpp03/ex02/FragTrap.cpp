#include "inc/FragTrap.hpp"
#include "inc/colors.hpp"

// Default constructor
FragTrap::FragTrap() {
	this->_hp = 100;
	this->_ep = 100;
	this->_ad = 30;
	std::cout << MAGENTA << "FragTrap default constructor as been called" << RESET << std::endl;
	return;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name){
	this->_hp = 100;
	this->_ep = 100;
	this->_ad = 30;
	std::cout << MAGENTA << "FragTrap constructor as been called" << RESET << std::endl;
	return;
}

// Copy constructor
FragTrap::FragTrap(const FragTrap &other) {
	*this = other;
	std::cout << MAGENTA << "FragTrap copy constructor as been called" << RESET << std::endl;
	return;
}

// Copy assignment overload
FragTrap &FragTrap::operator=(const FragTrap &rhs) {
	this->_name = rhs._name;
	this->_hp = rhs._hp;
	this->_ep = rhs._ep;
	this->_ad = rhs._ad;
	std::cout << MAGENTA << "FragTrap copy assignment overload as been called" << RESET << std::endl;
	return *this;
}

// Default destructor
FragTrap::~FragTrap() {
	std::cout << MAGENTA << "FragTrap deconstructor as been called" << RESET << std::endl;
	return;
}

// function
void FragTrap::highFivesGuys(void){
	if (this->_hp > 0 && this->_ep > 0){
		this->_ep--;
		std::cout << RED "FragTrap " << this->_name << " high fives mate !?" << RESET << std::endl;
	}
	else
		low("highFivesGuys");
}

void FragTrap::attack(const std::string& target){
	if (this->_hp > 0 && this->_ep > 0){
		this->_ep--;
		std::cout << YELLOW "FragTrap " << this->_name << " attacks " << target << ", causing "<< this->_ad << " points of damage!" << RESET << std::endl;
	}
	else
		low("attack");
}