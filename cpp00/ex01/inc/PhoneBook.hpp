#ifndef PHONEBOOK
#define PHONEBOOK

#include <iostream>
#include <cctype>
#include "Contact.hpp"

class PhoneBook
{
	public :
	PhoneBook();
	
	private :
	Contact contacts[8];
};

#endif