#include "inc/Form.hpp"

// Default constructor
Form::Form() : _gradeExec(0), _gradeSign(0){
}

Form::Form(std::string name, int gradeExec, int gradeSign){
	
}

// Copy constructor
Form::Form(const Form &other) {
	*this = other;
}

// Copy assignment overload
Form &Form::operator=(const Form &rhs) {
	(void)rhs;
	return *this;
}

// Default destructor
Form::~Form() {
}