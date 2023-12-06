#include "PhoneBook.hpp"
#include "Contact.hpp"
#include "colors.hpp"


PhoneBook::PhoneBook() : _index(0){
}

PhoneBook::~PhoneBook(){
}

Contact PhoneBook::get_contact(int index) {
	Contact con;
	if (index >= 0 && index < 8) {
		return _contact[index];
	}
	return (con);
}

void PhoneBook::add(Contact &con){
	if (_index == 8)
		_index = 0;
	_contact[_index] = con;
	_index++;
}

void PhoneBook::draw_search(){
	std::cout << YELLOW << "---------------------------------------------" << RESET << std::endl;
	std::cout  << YELLOW << "|" << RESET << std::setw(10) << "INDEX" << YELLOW << "|" << RESET;
	std::cout << std::setw(10) << "FIRST NAME" << YELLOW << "|" << RESET;
	std::cout << std::setw(10) << "LAST NAME" << YELLOW << "|" << RESET;
	std::cout << std::setw(10) << "NICKNAME" << YELLOW << "|" << RESET << std::endl;
	for (size_t i = 0; i < 8; i++)
	{
		if (_contact[i].get_fname(false).length() > 0){
			if (((size_t)_index == 8 && i == 0) || ((size_t)_index == 0 && i == 7) || (size_t)_index == i)
				std::cout << YELLOW << "|" << RESET << std::setw(9) << ">" << i << YELLOW << "|" << RESET;
			else
				std::cout << YELLOW << "|" << RESET << std::setw(10) << i << YELLOW << "|" << RESET;
			std::cout << std::setw(10) << _contact[i].get_fname(true) << YELLOW << "|" << RESET;
			std::cout << std::setw(10) << _contact[i].get_lname(true) << YELLOW << "|" << RESET;
			std::cout << std::setw(10) << _contact[i].get_nickname(true) << YELLOW << "|" << RESET << std::endl;
		}
	}
	std::cout << YELLOW << "---------------------------------------------" << RESET << std::endl;
}

void PhoneBook::draw_contact(int index){
	std::cout << YELLOW << "---------------------------------------------" << RESET << std::endl;
	std::cout << YELLOW << "|" << RESET << "FIRST NAME          " << YELLOW << "| " << RESET << _contact[index].get_fname(false) << std::endl;
	std::cout << YELLOW << "|" << RESET << "LAST NAME           " << YELLOW << "| " << RESET << _contact[index].get_lname(false) << std::endl;
	std::cout << YELLOW << "|" << RESET << "NICKNAME            " << YELLOW << "| " << RESET << _contact[index].get_nickname(false) << std::endl;
	std::cout << YELLOW << "|" << RESET << "PHONE NUMBER        " << YELLOW << "| " << RESET << _contact[index].get_number() << std::endl;
	std::cout << YELLOW << "|" << RESET << "YOUR DARKEST SECRET " << YELLOW << "| " << RESET << _contact[index].get_secret() << std::endl;
	std::cout << YELLOW << "---------------------------------------------" << RESET << std::endl;
}