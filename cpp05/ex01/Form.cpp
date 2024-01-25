#include "inc/Form.hpp"
#include "inc/colors.hpp"

// Default constructor
Form::Form() : _name("empty"), _gradeExec(0), _gradeSign(0), _sign(false){
	if (CALL)
		std::cout << MAGENTA << "Form default constructor as been called" << RESET << std::endl;
}

Form::Form(std::string name, int gradeExec, int gradeSign) : _name(name), _gradeExec(gradeExec), _gradeSign(gradeSign), _sign(false){
	gradeExeption(_gradeExec);
	gradeExeption(_gradeSign);
}

// Copy constructor
Form::Form(const Form &other) : _name(other._name), _gradeExec(other._gradeExec), _gradeSign(other._gradeSign), _sign(other._sign){
	if (CALL)
		std::cout << MAGENTA << "Form copy constructor as been called" << RESET << std::endl;
}

// Copy assignment overload
Form &Form::operator=(const Form &rhs){
	if (CALL)
		std::cout << MAGENTA << "Form assignment overload as been called" << RESET << std::endl;
	(void)rhs;
	return *this;
}

// Default destructor
Form::~Form() {
	if (CALL)
		std::cout << MAGENTA << "Form default deconstructor as been called" << RESET << std::endl;
}

// Function
std::string Form::getName() const{
	return _name;
}

int Form::getGradeExec() const{
	return _gradeExec;
}

int Form::getGradeSign() const{
	return _gradeSign;
}

bool Form::getSign() const{
	return _sign;
}

void Form::beSigned(Bureaucrat &bureaucrat){
	if (bureaucrat.getGrade() <= _gradeSign){
		_sign = true;
	}else{
		throw GradeTooLowException();
	}
}

void Form::gradeExeption(int grade){
	if (grade > 150){
		throw GradeTooLowException();
	}
	else if (grade < 1){
		throw GradeTooHighException();
	}
}

std::ostream &operator<<(std::ostream &out, const Form &form) {
	out << form.getName() << " Form grade execution " << form.getGradeExec() << " Form grade sign " << form.getGradeSign() << ".";
	return out;
}