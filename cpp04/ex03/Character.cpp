#include "inc/Character.hpp"
#include "inc/ICharacter.hpp"
#include "inc/colors.hpp"
#include <cstddef>

// Default constructor
Character::Character() : _floorIndex(0){
	for (int i = 0; i < MAX_EQUIPED; i++)
		_book[i] = NULL;
	for (int i = 0; i < MAX_DROPPED; i++)
		_book[i] = NULL;
	return;
}

Character::Character(std::string name) : _floorIndex(0), _name(name){
	for (int i = 0; i < MAX_EQUIPED; i++)
		_book[i] = NULL;
	for (int i = 0; i < MAX_DROPPED; i++)
		_book[i] = NULL;
	return;
}

// Copy constructor
Character::Character(const Character &other) {
	*this = other;
	return;
}

// Copy assignment overload
Character &Character::operator=(const Character &rhs) {
	this->_name = rhs._name;
	this->_floorIndex = rhs._floorIndex;
	for (int i = 0; i < MAX_EQUIPED; i++){
		if (_book[i])
			this->_book[i] = rhs._book[i];
	}
	for (int i = 0; i < MAX_DROPPED; i++){
		if (_floor[i])
			this->_floor[i] = rhs._floor[i];
	}
	return *this;
}

// Default destructor
Character::~Character() {
	for (int i = 0; i < MAX_EQUIPED; i++) {
		if (_book[i])
			delete _book[i];
	}
	for (int i = 0; i < MAX_DROPPED; i++) {
		if (_floor[i])
			delete _floor[i];
	}
	return;
}

std::string const & Character::getName() const{
	return this->_name;
}

void Character::equip(AMateria* m){
	for (int i = 0; i < 4; i++) {
		if (_book[i] == NULL){
			_book[i] = m;
			std::cout << RED << "New spell sheet was added to your book." << RESET << std::endl;
			break;
		}
		else if (i == 3)
			std::cout << RED << "Your spell book was full." << RESET << std::endl;
	}
}

void Character::unequip(int idx){
	if (idx >= 0 && idx < 4){
		_floor[_floorIndex] = _book[idx];
		_book[idx] = NULL;
		_floorIndex++;
	}
}

void Character::use(int idx, ICharacter& target){
	if (idx >= 0 && idx < 4)
		_book[idx]->use(target);
}