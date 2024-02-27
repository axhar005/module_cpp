#include "inc/PmergeMe.hpp"
#include <exception>
#include <iostream>
#include <iterator>
#include <stdexcept>
#include <string>
#include <vector>

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
	}

	for (size_t i = 0; i < _vector.size(); i++) {
		for (size_t j = i + 1; j < _vector.size(); j++) {
			if (_vector[i] == _vector[j])
				throw std::invalid_argument("error: doublon");
		}
	}
}

void PmergeMe::PrintVector(){
	std::vector<unsigned int>::iterator it;
	for (it = _vector.begin(); it != _vector.end(); it++){
		std::cout << *it << std::endl;
	}
}

void PmergeMe::PrintList(){
	std::list<unsigned int>::iterator it;
	for (it = _list.begin(); it != _list.end(); it++){
		std::cout << *it << std::endl;
	}
}