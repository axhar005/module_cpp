#ifndef RPN_HPP_
#define RPN_HPP_

#include <iostream>
#include <stack>

// Class declaration
class RPN {
public:
	RPN(); // Default constructor
	RPN(std::string str);
	RPN(const RPN &other); // Copy constructor
	RPN &operator=(const RPN &rhs); // Copy assignment overload
	~RPN(); // Default destructor
	void step();
	void get_number(void);

private:
	int _a;
	int _b;
	std::stack<int> _stack;
	std::string _str;

};

#endif // RPN_HPP_