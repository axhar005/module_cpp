#include "inc/Weapon.hpp"

// Default constructor
Weapon::Weapon(std::string type) : _type(type){
	return; 
}

// Default destructor
Weapon::~Weapon() {
	return;
}

const std ::string& Weapon::getType() const{
	return (_type);
}

void Weapon::setType(std::string type) {
	_type = type;
}