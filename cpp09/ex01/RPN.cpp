#include "inc/RPN.hpp"
#include "inc/colors.hpp"
#include <string>
// Default constructor
RPN::RPN(){
}

RPN::RPN(std::string str) : _a(0), _b(0), _str(str){
}


// Copy constructor
RPN::RPN(const RPN &other) {
	*this = other;
	return;
}

// Copy assignment overload
RPN &RPN::operator=(const RPN &rhs) {
	(void)rhs;
	return *this;
}

// Default destructor
RPN::~RPN() {
}

void RPN::step(){
	for (size_t i = 0; i < _str.length(); i++){
		if (isdigit(_str[i])){
			_stack.push(std::stoi(_str.substr(i, 1)));
		}else if (_str[i] == '+'){
			get_number();
			_stack.push(_a + _b);
		}else if (_str[i] == '-'){
			get_number();
			_stack.push(_a - _b);
		}else if (_str[i] == '/'){
			get_number();
			if (_b == 0)
				throw std::invalid_argument(RED "error: dived by 0 impossible" RESET);
			_stack.push(_a / _b);
		}else if (_str[i] == '*'){
			get_number();
			_stack.push(_a * _b);
		}else if (_str[i] != ' ' && _str[i] != '(' && _str[i] != ')'){
			throw std::invalid_argument(RED "error: unsupported character encountered" RESET);
		}
	}
	if (_stack.size() > 1)
		throw std::invalid_argument(RED "error: too much number" RESET);
	else
		std::cout << GREEN << _stack.top() << RESET << std::endl;
}

void RPN::get_number(void){
	if (_stack.size() > 1){
		_b = _stack.top();
		_stack.pop();
		_a = _stack.top();
		_stack.pop();
	}else{
		throw std::invalid_argument(RED "error: not enough of number" RESET);
	}
}
