#include <iostream>
#include "inc/utils.hpp"
#include "inc/Pars.hpp"

int main(int ac, char **av){
	if (ac != 2){
		std::cerr << "Usage: " << av[0] << " <literal>" << std::endl;
		return 0;
	}
	std::string str(av[1]);
	std::string a = "f340.";

	std::cout << "char : " << std::boolalpha << str_ischar(a) << std::endl;
	std::cout << "int : " << std::boolalpha << str_isint(a) << std::endl;
	std::cout << "float : " << std::boolalpha << str_isfloat(a) << std::endl;
}