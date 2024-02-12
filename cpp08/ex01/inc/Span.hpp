#ifndef SPAN_HPP_
#define SPAN_HPP_

// Class declaration
class Span {
public:
	Span(); // Default constructor
	Span(const Span &other); // Copy constructor
	Span &operator=(const Span &rhs); // Copy assignment overload
	~Span(); // Default destructor

private:

};

#endif // SPAN_HPP_