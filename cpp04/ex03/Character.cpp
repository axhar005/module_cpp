#include "inc/Character.hpp"
#include "inc/ICharacter.hpp"
#include "inc/colors.hpp"
#include <cstddef>
#include <iostream>

// Default constructor
Character::Character() : _floorIndex(0){
	if (CALL)
		std::cout << MAGENTA << "Character Default Constructor as been called" << RESET << std::endl;
	for (int i = 0; i < MAX_EQUIPED; i++)
		_book[i] = NULL;
	for (int i = 0; i < MAX_DROPPED; i++)
		_book[i] = NULL;
	return;
}

Character::Character(std::string name) : _floorIndex(0), _name(name){
	if (CALL)
		std::cout << MAGENTA << "Character Constructor as been called" << RESET << std::endl;
	for (int i = 0; i < MAX_EQUIPED; i++)
		_book[i] = NULL;
	for (int i = 0; i < MAX_DROPPED; i++)
		_book[i] = NULL;
	return;
}

// Copy constructor
Character::Character(const Character &other) {
	if (CALL)
		std::cout << MAGENTA << "Character Copy Constructor as been called" << RESET << std::endl;
	*this = other;
	return;
}

// Copy assignment overload
Character &Character::operator=(const Character &rhs) {
	if (CALL)
		std::cout << MAGENTA << "Character Copy Assignment Overload as been called" << RESET << std::endl;
	this->_name = rhs._name;
	this->_floorIndex = rhs._floorIndex;
	for (int i = 0; i < MAX_EQUIPED; i++){
		if (rhs._book[i])
			this->_book[i] = rhs._book[i]->clone();
		else 
			this->_book[i] = NULL;
	}
	for (int i = 0; i < MAX_DROPPED; i++){
		if (rhs._floor[i])
			this->_floor[i] = rhs._floor[i]->clone();
		else 
			this->_floor[i] = NULL;
	}
	return *this;
}

// Default destructor
Character::~Character() {
	if (CALL)
		std::cout << MAGENTA << "Character Deconstructor as been called" << RESET << std::endl;
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
	for (int i = 0; i < MAX_EQUIPED; i++) {
		if (_book[i] == NULL){
			_book[i] = m;
			std::cout << YELLOW << m->getType() << " New spell sheet was added to your book." << RESET << std::endl;
			break;
		}
		else if (i == MAX_EQUIPED - 1)
			std::cout << RED << "Your spell book was full." << RESET << std::endl;
	}
}

void Character::unequip(int idx){
	if (idx >= 0 && idx < 4 && _book[idx]){
		_floor[_floorIndex] = _book[idx];
		_book[idx] = NULL;
		_floorIndex++;
	}
}

void Character::use(int idx, ICharacter& target){
	if (idx >= 0 && idx < MAX_EQUIPED && _book[idx])
		_book[idx]->use(target);
	else
		std::cout << RED "Index not found" RESET << std::endl;
}