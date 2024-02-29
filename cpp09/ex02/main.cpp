#include <exception>
#include <iostream>
#include <ctime>
#include <iomanip>
#include "inc/PmergeMe.hpp"

int main(int ac, char **av)
{
	std::clock_t start = std::clock();
	if (ac == 1)
		return (std::cout << "Use: " << av[0] << " <positive number sequence>" << std::endl, 1);
	try {
		PmergeMe a;
		a.Parse(ac, av);
		std::cout << "Before: ";
		a.PrintVector();
		std::cout << "Before: ";
		a.PrintList();
	} catch (const std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	std::clock_t end = std::clock();
	double duration = (end - start) / static_cast<double>(CLOCKS_PER_SEC);
	std::cout << std::fixed << std::setprecision(5);
	std::cout << "Time to process: " << duration << " us" << std::endl;

	return 0;
}