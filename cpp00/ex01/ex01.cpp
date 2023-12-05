#include <cctype>
#include <iostream>

const char* RED = "\033[31m";
const char* GREEN = "\033[32m";
const char* YELLOW = "\033[33m";
const char* BLUE = "\033[34m";
const char* MAGENTA = "\033[35m";
const char* CYAN = "\033[36m";
const char* RESET = "\033[0m";

void	toupper(std::string &str)
{
	for (std::string::size_type i = 0; i < str.length(); ++i) {
        str[i] = std::toupper(str[i]);
    }
}

void	print_info(void)
{
	std::cout << YELLOW << "--------------------------------" << RESET << std::endl;
	std::cout << YELLOW << "|" << RESET << " HELP   -show commands        " << YELLOW << "|" << RESET << std::endl;
	std::cout << YELLOW << "|" << RESET << " ADD    -add a contact        " << YELLOW << "|" << RESET << std::endl;
	std::cout << YELLOW << "|" << RESET << " SEARCH -search for a contact " << YELLOW << "|" << RESET << std::endl;
	std::cout << YELLOW << "|" << RESET << " EXIT   -quit the phonebook   " << YELLOW << "|" << RESET << std::endl;
	std::cout << YELLOW << "--------------------------------" << RESET << std::endl;
}

std::string prompt()
{
	std::string str;
	std::cout << "PhoneBook > ";
	getline(std::cin, str);
	if (std::cin.eof())
		return ("");
	return (str);
}

int	main(void)
{
	std::string cmd;

	std::cout << YELLOW << "~Welcome to my PhoneBook~" << RESET << std::endl;
	print_info();
	while(1)
	{
		cmd = prompt();
		toupper(cmd);
		if (cmd == "HELP")
			print_info();
		else if (cmd == "ADD")
			std::cout << "add" << std::endl;
		else if (cmd == "SEARCH")
			std::cout << "search" << std::endl;
		else if (cmd == "EXIT")
			return (0);
		else
			std::cout << "\033[1;31mCommande not found !\033[0m" << std::endl;
	}
}