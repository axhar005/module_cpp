#include "inc/Bureaucrat.hpp"

// Default constructor
Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name){
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

std::ostream &operator<<(std::ostream &out, const Bureaucrat &bureaucrat) {
	out << bureaucrat.getName() << " bureaucrat grade " << bureaucrat.getGrade() << ".";
	return out;
}