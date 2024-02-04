#include "inc/RobotomyRequestForm.hpp"
#include "inc/colors.hpp"

// Default constructor
RobotomyRequestForm::RobotomyRequestForm() : _target(""){
	if (CALL)
		std::cout << MAGENTA << "RobotomyRequestForm default constructor as been called" << RESET << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRequestForm", 72, 45), _target(target) {
}

// Copy constructor
RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &other) {
	if (CALL)
		std::cout << MAGENTA << "RobotomyRequestForm copy constructor as been called" << RESET << std::endl;
	*this = other;
}

// Copy assignment overload
RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &rhs) {
	if (CALL)
		std::cout << MAGENTA << "RobotomyRequestForm assignment overload as been called" << RESET << std::endl;
	_target = rhs._target;
	return *this;
}

// Default destructor
RobotomyRequestForm::~RobotomyRequestForm() {
	if (CALL)
		std::cout << MAGENTA << "RobotomyRequestForm default deconstructor as been called" << RESET << std::endl;
}

// Function

std::string RobotomyRequestForm::getTarget() const{
	return(_target);
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const{
	if (executor.getGrade() > this->getGradeExec())
		throw GradeTooLowException();
	if (!this->getSign())
		throw std::invalid_argument("Form not signed");
	
	std::srand(static_cast<unsigned int>(std::time(nullptr)));
    int randomNum = std::rand();
    double randomValue = static_cast<double>(randomNum % 2);
	if (randomValue == 0)
		std::cout << CYAN << _target << YELLOW " has been robotomized" RESET << std::endl;
	else 
		std::cout << CYAN << _target << YELLOW " the operation has failed" RESET << std::endl;
}