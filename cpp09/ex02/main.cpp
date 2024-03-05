#include <exception>
#include <iostream>
#include <ctime>
#include <iomanip>
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



// int main() {

// 	sort(arr, 0, arr.size() - 1);

// 	return 0;
// }