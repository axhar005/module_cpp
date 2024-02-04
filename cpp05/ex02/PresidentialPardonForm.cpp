#include "inc/PresidentialPardonForm.hpp"
#include "inc/AForm.hpp"
#include "inc/colors.hpp"

// Default constructor
PresidentialPardonForm::PresidentialPardonForm() {
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("PresidentialPardonForm", 25, 5), _target(target) {
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

void PresidentialPardonForm::execute(Bureaucrat const & executor) const{
	if (executor.getGrade() > this->getGradeSign() || executor.getGrade() > this->getGradeExec())
		throw GradeTooLowException();
	std::cout << CYAN << _target << RED " est pardonnée par Zaphod Beeblebrox." RESET << std::endl;
}