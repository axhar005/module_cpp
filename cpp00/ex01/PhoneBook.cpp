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
	
	for (size_t i = 0; _contact[i].get_fname(false).length() > 0; i++)
	{
		std::cout << std::setw(10) << _index << "|" << std::endl;
		std::cout << std::setw(10) << _contact[i].get_fname(true) << "|" << std::endl;
		std::cout << std::setw(10) << _contact[i].get_lname(true) << "|" << std::endl;
		std::cout << std::setw(10) << _contact[i].get_nickname(true) << "|" << std::endl;
	}
	

}