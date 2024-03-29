#include "inc/Span.hpp"
#include <stdexcept>

// Default constructor
Span::Span() {}

Span::Span(unsigned int n) : _size(n){}

// Copy constructor
Span::Span(const Span &other) {
	*this = other;
}

// Copy assignment overload
Span &Span::operator=(const Span &rhs) {
	(void)rhs;
	return *this;
}

// Default destructor
Span::~Span() {}

void Span::rangeIterator(int range, int startNumber){
	if (_span.size() + range > _size)
		throw std::out_of_range(RED"error: out of range" RESET);
	int tmp = _span.size();
	_span.resize(_span.size() + range);
	iota( _span.begin() + tmp, _span.end(), startNumber);
}

// Function
void Span::addNumber(int nbr) {
	if (_span.size() < _size)
		_span.push_back(nbr);
	else
		throw std::out_of_range("Span full");
}

int Span::shortestSpan() const{
	if (_span.size() > 1){
		int min_distance = std::numeric_limits<int>::max();
		for (size_t i = 0; i < _span.size() - 1; ++i) {
			for (size_t j = i + 1; j < _span.size(); ++j) {
				int distance = std::abs(_span[i] - _span[j]);
				if (distance < min_distance) {
					min_distance = distance;
				}
			}
		}
		return min_distance;
	}else{
		throw std::runtime_error( RED "Cannot compute distance" RESET);
	}
}

int Span::longestSpan() const{
	if (_span.size() > 1){
		int min = *std::min_element(_span.begin(), _span.end());
		int max = *std::max_element(_span.begin(), _span.end());
		return (max - min);
	}else{
		throw std::runtime_error("Cannot compute distance");
	}
}

