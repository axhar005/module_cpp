#ifndef CONTACT
#define CONTACT

#include <iostream>
#include <cctype>

class Contact
{
	public :
	//function
	Contact();
	Contact(std::string fname, std::string lname, std::string nickname, std::string number, std::string secret);
	~Contact();
	const std::string getFname(bool flag) const;
	const std::string getLname(bool flag) const;
	const std::string getNickname(bool flag) const;
	const std::string getNumber() const;
	const std::string getSecret() const;

	private :
	std::string _fname;
	std::string _lname;
	std::string _nickname;
	std::string _number;
	std::string _secret;
};


#endif