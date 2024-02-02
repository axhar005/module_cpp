#include "inc/PresidentialPardonForm.hpp"

// Default constructor
PresidentialPardonForm::PresidentialPardonForm() {
}

// Copy constructor
PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &other) {
	*this = other;
}

// Copy assignment overload
PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &rhs) {
	(void)rhs;
	return *this;
}

// Default destructor
PresidentialPardonForm::~PresidentialPardonForm() {
}