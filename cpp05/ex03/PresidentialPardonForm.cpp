#include "inc/PresidentialPardonForm.hpp"
#include "inc/AForm.hpp"
#include "inc/colors.hpp"

// Default constructor
PresidentialPardonForm::PresidentialPardonForm() : _target(""){
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("PresidentialPardonForm", 25, 5), _target(target) {
}

// Copy constructor
PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &other) {
	*this = other;
}

// Copy assignment overload
PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &rhs) {
	_target = rhs._target;
	return *this;
}

// Default destructor
PresidentialPardonForm::~PresidentialPardonForm() {
}

// Function

std::string PresidentialPardonForm::getTarget() const{
	return(_target);
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const{
	if (executor.getGrade() > this->getGradeExec())
		throw GradeTooLowException();
	if (!this->getSign())
		throw std::invalid_argument("Form not signed");
	std::cout << CYAN << _target << YELLOW " is forgiven by Zaphod Beeblebrox" RESET << std::endl;
}