#include <exception>
#include <iostream>
#include "inc/PmergeMe.hpp"

int main(int ac, char **av)
{
	if (ac == 1)
		return (std::cout << "Use: " << av[0] << " <path>" << std::endl, 1);
	try {
		PmergeMe a;
		a.Parse(ac, av);
		a.PrintVector();
	} catch (const std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	return 0;
}