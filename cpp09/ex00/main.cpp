#include <iostream>
#include <fstream>
#include <sstream>
#include <map>
#include <string>
#include "inc/BitcoinExchange.hpp"

int main(int ac, char **av){
	if (ac != 2){
		std::cout << "Use: " << av[0] << " <path>" << std::endl;
		return (0);
	}
	try
	{
		BitcoinExchange a(av[1]);
		a.read_db();
		a.pars_db();
		a.print_db();
		a.read();
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	return 0;
}