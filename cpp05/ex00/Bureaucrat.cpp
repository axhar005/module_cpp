#include "inc/Bureaucrat.hpp"

// Default constructor
Bureaucrat::Bureaucrat() {
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name){
	if (_grade > 150)
		throw GradeTooHighException();
	else if (_grade < 0)
		throw GradeTooLowException();
	_grade = grade;
}

// Copy constructor
Bureaucrat::Bureaucrat(const Bureaucrat &other) {
	*this = other;
}

// Copy assignment overload
Bureaucrat &Bureaucrat::operator=(const Bureaucrat &rhs) {
	(void)rhs;
	return *this;
}

// Default destructor
Bureaucrat::~Bureaucrat() {
}

std::string Bureaucrat::getName() const{
	return _name;
}

void Bureaucrat::setGrade(int grade){
	if (_grade > 150)
		throw GradeTooHighException();
	else if (_grade < 0)
		throw GradeTooLowException();
	_grade = grade;
}

const char *Bureaucrat::GradeTooHighException::what(void) const throw() {
	return("Grade to Heigh");
}

const char *Bureaucrat::GradeTooLowException::what(void) const throw() {
	return("Grade to low");
}