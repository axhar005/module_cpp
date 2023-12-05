#ifndef CONTACT
#define CONTACT

#include <iostream>
#include <cctype>

class Contact
{
	public :
	//function
	Contact();
	~Contact();
	Contact(std::string fname, std::string lname, std::string nickname, std::string number, std::string secret);
	const std::string get_fname(bool flag) const;
	const std::string get_lname(bool flag) const;
	const std::string get_nickname(bool flag) const;
	const std::string get_number() const;
	const std::string get_secret() const;

	private :
	std::string _fname;
	std::string _lname;
	std::string _nickname;
	std::string _number;
	std::string _secret;
};


#endif