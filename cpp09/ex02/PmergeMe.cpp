#include "inc/PmergeMe.hpp"
#include <ctime>
#include <exception>
#include <iostream>
#include <iterator>
#include <stdexcept>
#include <string>
#include <vector>
#include <iomanip>

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
		_vector.push_back(static_cast<unsigned int>(tmp));
		_list.push_back(static_cast<unsigned int>(tmp));
	}

	for (size_t i = 0; i < _vector.size(); i++) {
		for (size_t j = i + 1; j < _vector.size(); j++) {
			if (_vector[i] == _vector[j])
				throw std::invalid_argument("error: doublon");
		}
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

void PmergeMe::PrintList(){
	std::list<unsigned int>::iterator it;
	std::list<unsigned int>::iterator next;
	for (it = _list.begin(); it != _list.end(); it++){
		next = it;
		next++;
		std::cout << *it;
		if (next != _list.end())
			std::cout << ", ";
	}
	std::cout << std::endl;
}

void PmergeMe::Time(std::clock_t start, std::clock_t end){
	double duration = (end - start) / static_cast<double>(CLOCKS_PER_SEC);
	std::cout << std::fixed << std::setprecision(5);
	std::cout << "Time to process: " << duration << " us" << std::endl;
}