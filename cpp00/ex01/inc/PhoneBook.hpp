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
	void draw_search();
	void draw_contact(int index);
	Contact get_contact(int index);
  private:
	Contact _contact[8];
	int 	_index;
};

#endif