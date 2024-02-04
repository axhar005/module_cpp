#include "inc/Bureaucrat.hpp"
#include "inc/AForm.hpp"
#include "inc/colors.hpp"

// Default constructor
Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name){
	if (CALL)
		std::cout << MAGENTA << "Bureacrat default constructor as been called" << RESET << std::endl;
	if (grade > 150){
		throw GradeTooLowException();
	}
	else if (grade < 1){
		throw GradeTooHighException();
	}
	_grade = grade;
}

// Copy constructor
Bureaucrat::Bureaucrat(const Bureaucrat &other) {
	if (CALL)
		std::cout << MAGENTA << "Bureacrat copy constructor as been called" << RESET << std::endl;
	*this = other;
}

// Copy assignment overload
Bureaucrat &Bureaucrat::operator=(const Bureaucrat &rhs) {
	if (CALL)
		std::cout << MAGENTA << "Bureacrat assignment overload as been called" << RESET << std::endl;
	(void)rhs;
	return *this;
}

// Default destructor
Bureaucrat::~Bureaucrat() {
	if (CALL)
		std::cout << MAGENTA << "Bureacrat default deconstructor as been called" << RESET << std::endl;
}

// Function
std::string Bureaucrat::getName() const{
	return _name;
}

int Bureaucrat::getGrade() const{
	return _grade;
}

void Bureaucrat::setGrade(int grade){
	if (grade > 150){
		throw GradeTooLowException();
	}
	else if (grade < 1){
		throw GradeTooHighException();
	}
	_grade = grade;
}

void Bureaucrat::gradeIncrease(int i){
	setGrade(_grade - i);
}

void Bureaucrat::gradeDecrease(int i){
	setGrade(_grade + i);
}

void Bureaucrat::signForm(AForm &form) const{
	if (form.getSign())
		std::cout << _name << " couldn't sign " << form.getName() << " because form alrady sign." << std::endl;
	else
		std::cout << _name << " signed " << form.getName() << std::endl;
}

std::ostream &operator<<(std::ostream &out, const Bureaucrat &bureaucrat) {
	out << bureaucrat.getName() << " bureaucrat grade " << bureaucrat.getGrade() << ".";
	return out;
}