#include "inc/RobotomyRequestForm.hpp"

// Default constructor
RobotomyRequestForm::RobotomyRequestForm() {
}

// Copy constructor
RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &other) {
	*this = other;
}

// Copy assignment overload
RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &rhs) {
	(void)rhs;
	return *this;
}

// Default destructor
RobotomyRequestForm::~RobotomyRequestForm() {
}