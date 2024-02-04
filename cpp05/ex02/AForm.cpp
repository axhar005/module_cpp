#include "inc/AForm.hpp"
#include "inc/colors.hpp"

// Default constructor
AForm::AForm() : _name(""), _gradeSign(150), _gradeExec(150), _sign(false){
	if (CALL)
		std::cout << MAGENTA << "AForm default constructor as been called" << RESET << std::endl;
}

AForm::AForm(std::string name, int gradeSign, int gradeExec) : _name(name), _gradeSign(gradeSign), _gradeExec(gradeExec), _sign(false){
	gradeExeption(_gradeSign);
	gradeExeption(_gradeExec);
}

// Copy constructor
AForm::AForm(const AForm &other) : _name(other._name), _gradeSign(other._gradeSign), _gradeExec(other._gradeExec), _sign(other._sign){
	if (CALL)
		std::cout << MAGENTA << "AForm copy constructor as been called" << RESET << std::endl;
}

// Copy assignment overload
AForm &AForm::operator=(const AForm &rhs){
	if (CALL)
		std::cout << MAGENTA << "AForm assignment overload as been called" << RESET << std::endl;
	(void)rhs;
	return *this;
}

// Default destructor
AForm::~AForm() {
	if (CALL)
		std::cout << MAGENTA << "AForm default deconstructor as been called" << RESET << std::endl;
}

// Function
std::string AForm::getName() const{
	return _name;
}

int AForm::getGradeExec() const{
	return _gradeExec;
}

int AForm::getGradeSign() const{
	return _gradeSign;
}

bool AForm::getSign() const{
	return _sign;
}

void AForm::beSigned(Bureaucrat &bureaucrat){
	if (bureaucrat.getGrade() <= _gradeSign){
		_sign = true;
	}else{
		throw GradeTooLowException();
	}
}

void AForm::gradeExeption(int grade){
	if (grade > 150){
		throw GradeTooLowException();
	}
	else if (grade < 1){
		throw GradeTooHighException();
	}
}

std::ostream &operator<<(std::ostream &out, const AForm &form) {
	out << form.getName() << " is AForm grade execution is " << form.getGradeExec() << " and AForm grade sign is " << form.getGradeSign() << ".";
	return out;
}