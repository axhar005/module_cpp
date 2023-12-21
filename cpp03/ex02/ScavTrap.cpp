#include "inc/ScavTrap.hpp"
#include "inc/colors.hpp"

// Default constructor
ScavTrap::ScavTrap() : ClapTrap(){
	setHp(100);
	setEp(50);
	setAd(20);
	std::cout << MAGENTA << "ScavTrap default constructor as been called" << RESET << std::endl;
	return;
}

// Default constructor
ScavTrap::ScavTrap(std::string name) : ClapTrap(name){
	setHp(100);
	setEp(50);
	setAd(20);
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
	setHp(rhs.getHp());
	setEp(rhs.getEp());
	setAd(rhs.getAd());
	std::cout << MAGENTA << "ScavTrap copy assignment overload as been called" << RESET << std::endl;
	return *this;
}

// Default destructor
ScavTrap::~ScavTrap() {
	std::cout << MAGENTA << "ScavTrap deconstructor as been called" << RESET << std::endl;
	return;
}

void ScavTrap::guardGate(void){
	if (getHp() > 0 && getEp() > 0){
		setEp(getEp() - 1);
		std::cout << RED << "ScavTrap enter in gate keeper mode!" << RESET << std::endl;
	}
	else
		low("guardGate");
}

void ScavTrap::attack(const std::string& target){
	if (getHp() > 0 && getEp() > 0){
		setEp(getEp() - 1);
		std::cout << YELLOW "ScavTrap " << getName() << " attacks " << target << ", causing "<< getAd() << " points of damage!" << RESET << std::endl;
	}
	else
		low("attack");
}