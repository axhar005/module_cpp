#include "inc/RobotomyRequestForm.hpp"
#include "inc/colors.hpp"

// Default constructor
RobotomyRequestForm::RobotomyRequestForm() {
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRequestForm", 72, 45), _target(target) {
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

void RobotomyRequestForm::execute(Bureaucrat const & executor) const{
	std::srand(static_cast<unsigned int>(std::time(nullptr)));
    int randomNum = std::rand();
    double randomValue = static_cast<double>(randomNum % 2);
	if (executor.getGrade() > this->getGradeSign() || executor.getGrade() > this->getGradeExec())
		throw GradeTooLowException();
	if (randomValue == 0)
		std::cout << CYAN << _target << YELLOW " a été robotomisée." RESET << std::endl;
	else 
		std::cout << CYAN << _target << RED " l’opération a échoué." RESET << std::endl;
}