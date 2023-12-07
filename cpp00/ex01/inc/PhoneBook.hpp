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
	void add(Contact &con);
	void drawSearch(void);
	void drawContact(int index);
	Contact getContact(int index);
  private:
	Contact _contact[8];
	int 	_index;
};

#endif