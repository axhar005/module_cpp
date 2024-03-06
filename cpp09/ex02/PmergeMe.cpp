#include "inc/PmergeMe.hpp"
#include "inc/colors.hpp"
#include <ctime>
#include <exception>
#include <iostream>
#include <iterator>
#include <ostream>
#include <ratio>
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
	_len = _vector.size();
}

void PmergeMe::PrintVector(){
	for (size_t i = 0; i < _vector.size(); i++){
			std::cout << _vector[i] << " ";;
	}
	std::cout << std::endl;
}

void PmergeMe::PrintDeque(){
	for (size_t i = 0; i < _deque.size(); i++){
			std::cout << _deque[i] << " ";
	}
	std::cout << std::endl;
}

void PmergeMe::PrintTime(){
	std::cout << CYAN "Time to process a range of " GREEN << _len << CYAN " elements with std::vector : " << GREEN << _vector_duration << RESET CYAN " us" RESET << std::endl;
	std::cout << MAGENTA "Time to process a range of " GREEN << _len << MAGENTA " elements with std::deque  : " << GREEN << _deque_duration << RESET MAGENTA " us" RESET << std::endl;
}

void PmergeMe::SortVector(){

	std::cout << CYAN "Vector\n{" RED << std::endl;
	std::cout << "Before ";
	PrintVector();
	std::cout << YELLOW << std::endl;
	getTimePassed();
	int K = _vector.size() / 2;
	sort(_vector, 0, _vector.size() - 1, K);
	_vector_duration = getTimePassed();
	std::cout << GREEN "After ";
	PrintVector();
	std::cout << CYAN "}" RESET << std::endl;
	std::cout << std::endl;
}

void PmergeMe::SortDeque(){

	std::cout << MAGENTA "Deque\n{" RED << std::endl;
	std::cout << "Before ";
	PrintDeque();
	std::cout << YELLOW << std::endl;
	getTimePassed();
	int K = _deque.size() / 2;
	sort(_deque, 0, _deque.size() - 1, K);
	_deque_duration = getTimePassed();
	std::cout << GREEN "After ";
	PrintDeque();
	std::cout << MAGENTA "}" RESET << std::endl;
	std::cout << std::endl;
}


