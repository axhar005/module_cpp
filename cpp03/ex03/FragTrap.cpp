#include "inc/FragTrap.hpp"
#include "inc/colors.hpp"

// Default constructor
FragTrap::FragTrap() {
	setHp(100);
	setEp(100);
	setAd(30);
	std::cout << MAGENTA << "FragTrap default constructor as been called" << RESET << std::endl;
	return;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name){
	setHp(100);
	setEp(100);
	setAd(30);
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
	setName(rhs.getName());
	setHp(rhs.getHp());
	setEp(rhs.getEp());
	setAd(rhs.getAd());
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
	if (getHp() > 0 && getEp() > 0){
		setEp(getEp() - 1);
		std::cout << RED "FragTrap " << getName() << " high fives mate !?" << RESET << std::endl;
	}
	else
		low("highFivesGuys");
}

void FragTrap::attack(const std::string& target){
	if (getHp() > 0 && getEp() > 0){
		setEp(getEp() - 1);
		std::cout << YELLOW "FragTrap " << getName() << " attacks " << target << ", causing "<< getAd() << " points of damage!" << RESET << std::endl;
	}
	else
		low("attack");
}