#include "inc/Contact.hpp"

Contact::Contact(){
}

Contact::Contact(std::string fname, std::string lname, std::string nickname, std::string number, std::string secret) {
	_fname = fname;
	_lname = lname;
	_nickname = nickname;
	_number = number;
	_secret = secret;
}

Contact::~Contact(){
}

const std::string Contact::getFname(bool flag) const{
	if (flag && _fname.length() > 9)
		return (_fname.substr(0, 9) + ".");
	return (_fname);
}
const std::string Contact::getLname(bool flag) const{
	if (flag && _lname.length() > 9)
		return (_lname.substr(0, 9) + ".");
	return (_lname);
}

const std::string Contact::getNickname(bool flag) const{
	if (flag && _nickname.length() > 9)
		return (_nickname.substr(0, 9) + ".");
	return (_nickname);
}

const std::string Contact::getNumber() const{
	return (_number);
}

const std::string Contact::getSecret() const{
	return (_secret);
}