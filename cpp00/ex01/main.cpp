#include <string>
#include <cctype>
#include <iostream>
#include "inc/PhoneBook.hpp"
#include "inc/colors.hpp"


void	str_toupper(std::string &str)
{
	for (std::string::size_type i = 0; i < str.length(); ++i) {
        str[i] = std::toupper(str[i]);
    }
}

bool str_isdigit(const std::string &str)
{
	for (size_t i = 0; i < str.length(); i++) {
		if (!isdigit(str[i])) {
			return (false);
		}
	}
	return (true);
}

void	print_info(void)
{
	std::cout << YELLOW << "---------------------------------------------" << RESET << std::endl;
	std::cout << YELLOW << "|" << RESET << " HELP   " << YELLOW << "| " << RESET "show commands                    " << YELLOW << "|" << RESET << std::endl;
	std::cout << YELLOW << "|" << RESET << " ADD    " << YELLOW << "| " << RESET "add a contact                    " << YELLOW << "|" << RESET << std::endl;
	std::cout << YELLOW << "|" << RESET << " SEARCH " << YELLOW << "| " << RESET "search for a contact             " << YELLOW << "|" << RESET << std::endl;
	std::cout << YELLOW << "|" << RESET << " EXIT   " << YELLOW << "| " << RESET "quit the phonebook               " << YELLOW << "|" << RESET << std::endl;
	std::cout << YELLOW << "---------------------------------------------" << RESET << std::endl;
}

std::string prompt(std::string pmt)
{
	std::string str;
	std::cout << pmt;
	getline(std::cin, str);
	if (std::cin.fail())
		exit(2);
	return (str);
}

void cmd_add(PhoneBook &book)
{
	std::string fname, lname, nickname, number, secret;
	fname = prompt("FIRST NAME : ");
	if (fname.length() == 0){
		std::cout << RED << "wrong entries" << RESET << std::endl;
		return ;
	}
	lname = prompt("LAST NAME : ");
	if (lname.length() == 0){
		std::cout << RED << "wrong entries" << RESET << std::endl;
		return ;
	}
	nickname = prompt("NICKNAME : ");
	if (nickname.length() == 0){
		std::cout << RED << "wrong entries" << RESET << std::endl;
		return ;
	}
	number = prompt("PHONE NUMBER : ");
	if (number.length() == 0){
		std::cout << RED << "wrong entries" << RESET << std::endl;
		return ;
	}
	secret = prompt("YOUR DARKEST SECRET : ");
	if (secret.length() == 0){
		std::cout << RED << "wrong entries" << RESET << std::endl;
		return ;
	}
	Contact con(fname, lname, nickname, number, secret);
	book.add(con);
}

void cmd_search(PhoneBook &book)
{
	int tmp;
	book.drawSearch();
	if (book.getContact(0).getFname(false).length() <= 0)
		return ;
	std::string pmt = prompt("CONTACT INDEX : ");
	if (!str_isdigit(pmt))
	{
		std::cout << RED << "invalid index" << RESET << std::endl;
		return ;
	}
	tmp = std::atoi(pmt.c_str());
	if (tmp >= 0 && tmp < 8 && book.getContact(tmp).getFname(false).length() > 0)
		book.drawContact(tmp);
	else 
		std::cout << "invalid index" << std::endl;
}

int	main(void)
{
	PhoneBook book;
	std::string cmd;
	std::cout << YELLOW << "~Welcome to my PhoneBook~" << RESET << std::endl;
	print_info();
	while(1)
	{
		cmd = prompt("PhoneBook > ");
		str_toupper(cmd);
		if (cmd == "HELP")
			print_info();
		else if (cmd == "ADD")
			cmd_add(book);
		else if (cmd == "SEARCH")
			cmd_search(book);
		else if (cmd == "EXIT")
			return (0);
		else
			std::cout << RED << "Commande not found !" << RESET << std::endl;
	}
}