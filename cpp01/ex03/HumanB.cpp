#include "inc/HumanB.hpp"
#include "inc/Weapon.hpp"

// Default constructor
HumanB::HumanB() {
	return;
}

HumanB::HumanB(std::string name) : _name(name) {
	return;
}

HumanB::HumanB(std::string name, Weapon *weapon) : _name(name), _weapon(weapon) {
	return;
}

// Default destructor
HumanB::~HumanB() {
	return;
}

void HumanB::setWeapon(Weapon &weapon){
	_weapon = &weapon;
}

void HumanB::attack() const{
	if (this->_weapon)
		std::cout << _name << "attacks with their" << _weapon->getType() << std::endl;
	else if (this->_weapon)
		std::cout << _name << "attacks with their" << "empty" << std::endl;
}