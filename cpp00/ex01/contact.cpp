#include "Contact.hpp"

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

std::string Contact::get_name(){

}