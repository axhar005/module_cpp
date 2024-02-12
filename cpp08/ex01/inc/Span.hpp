#ifndef SPAN_HPP_
#define SPAN_HPP_

#include <vector>

// Class declaration
class Span {
public:
	Span(); // Default constructor
	Span(unsigned int n);
	Span(const Span &other); // Copy constructor
	Span &operator=(const Span &rhs); // Copy assignment overload
	~Span(); // Default destructor
	void addNumber(int nbr);
	int shortestSpan() const;
	int longestSpan() const;


private:
	unsigned int _size;
	std::vector<int> _span;
};

#endif // SPAN_HPP_