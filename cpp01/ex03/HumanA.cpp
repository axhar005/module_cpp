#include "inc/HumanA.hpp"

// Default constructor
HumanA::HumanA(std::string name, Weapon &weapon) : _name(name), _weapon(weapon){
	return;
}

// Default destructor
HumanA::~HumanA() {
	return;
}

void HumanA::attack() const{
	std::cout << _name << "attacks with their" << _weapon.getType() << std::endl;
}