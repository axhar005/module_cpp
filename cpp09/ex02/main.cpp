#include <exception>
#include <iostream>
#include "inc/PmergeMe.hpp"
#include "inc/colors.hpp"

int main(int ac, char **av)
{
	if (ac == 1)
		return (std::cout << "Use: " << av[0] << " <positive number sequence>" << std::endl, 1);
	try {
		PmergeMe arr;
		arr.Parse(ac, av);
		arr.SortVector();
		arr.SortDeque();
		arr.PrintTime();
	} catch (const std::exception &e) {
		std::cerr << RED << e.what() << RESET << std::endl;
	}

	return 0;
}