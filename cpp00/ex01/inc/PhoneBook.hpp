#ifndef PHONEBOOK
# define PHONEBOOK

# include "Contact.hpp"
# include <cctype>
# include <iostream>

class PhoneBook
{
  public:
	PhoneBook();
	~PhoneBook();
	void PhoneBook::add(Contact con);

  private:
	Contact _contact[8];
	int 	_index;
};

#endif