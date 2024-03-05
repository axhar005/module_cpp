#include "inc/PmergeMe.hpp"
#include "inc/colors.hpp"
#include <ctime>
#include <exception>
#include <iostream>
#include <iterator>
#include <stdexcept>
#include <string>
#include <vector>
#include <iomanip>
#include <chrono>


static double  getTimePassed(void) {
    static std::chrono::high_resolution_clock::time_point T;
    static bool init = false;
    if (!init) {
        T = std::chrono::high_resolution_clock::now();
        init = true;
        return 0;
    }
    init = false;
    std::chrono::duration<double, std::milli> ms = std::chrono::high_resolution_clock::now() - T;
    return ms.count();
}

// Default constructor
PmergeMe::PmergeMe(){
}

// Copy constructor
PmergeMe::PmergeMe(const PmergeMe &other) {
	*this = other;
	return;
}

// Copy assignment overload
PmergeMe &PmergeMe::operator=(const PmergeMe &rhs) {
	(void)rhs;
	return *this;
}

// Default destructor
PmergeMe::~PmergeMe() {
}

void PmergeMe::Parse(int ac, char **av){
	for (int i = 1; i < ac; i++){
		int tmp = std::stoi(av[i]);
		if (tmp < 0)
			throw std::invalid_argument("Not a positive number");
		_vector.push_back(tmp);
		_deque.push_back(tmp);
	}
}

void PmergeMe::PrintVector(){
	for (size_t i = 0; i < _vector.size(); i++){
			std::cout << _vector[i];
		if (i < _vector.size() - 1)
			std::cout << ", ";
	}
	std::cout << std::endl;
}

void PmergeMe::PrintDeque(){
	for (size_t i = 0; i < _deque.size(); i++){
			std::cout << _deque[i];
		if (i < _deque.size() - 1)
			std::cout << ", ";
	}
	std::cout << std::endl;
}

void PmergeMe::SortVector(){

	PrintVector();
	std::cout << CYAN "Vector" YELLOW << std::endl;
	getTimePassed();
	sort(_vector, 0, _vector.size() - 1);
	double duration = getTimePassed();
	PrintVector();
	std::cout << RESET;
	std::cout << CYAN "Time to process: " GREEN << duration << RESET CYAN " us" RESET << std::endl;
	std::cout << std::endl;
}


void PmergeMe::SortDeque(){
	
	std::cout << MAGENTA "Deque" YELLOW << std::endl;
	PrintDeque();
	getTimePassed();
	sort(_deque, 0, _deque.size() - 1);
	double duration = getTimePassed();
	PrintDeque();
	std::cout << RESET;

	std::cout << MAGENTA "Time to process: " GREEN << duration << RESET MAGENTA " us" RESET << std::endl;
	std::cout << std::endl;
}


