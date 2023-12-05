#ifndef PHONEBOOK
# define PHONEBOOK

# include "Contact.hpp"
# include <cctype>
# include <iomanip>
# include <iostream>

class PhoneBook
{
  public:
	PhoneBook();
	~PhoneBook();
	void PhoneBook::add(Contact con);
	void PhoneBook::print();

  private:
	Contact _contact[8];
	int 	_index;
};

#endif