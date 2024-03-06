#include <exception>
#include <iostream>
#include "inc/PmergeMe.hpp"

int main(int ac, char **av)
{
	if (ac == 1)
		return (std::cout << "Use: " << av[0] << " <positive number sequence>" << std::endl, 1);
	try {
		PmergeMe arr;
		arr.Parse(ac, av);
		arr.SortVector();
		arr.SortDeque();
	} catch (const std::exception &e) {
		std::cerr << e.what() << std::endl;
	}

	return 0;
}