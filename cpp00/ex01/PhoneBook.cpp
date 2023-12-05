#include "PhoneBook.hpp"

PhoneBook::PhoneBook(){
}

PhoneBook::~PhoneBook(){
}

void PhoneBook::add(Contact con){
	if (_index == 8)
		_index = 0;
	_contact[_index] = con;
	_index++;
}

void PhoneBook::print(){
	

}