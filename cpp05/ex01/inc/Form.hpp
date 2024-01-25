#ifndef FORM_HPP_
#define FORM_HPP_

#include <iostream>
#include "Bureaucrat.hpp"

// Class declaration
class Form {
public:
	class GradeTooHighException : public std::exception {
		public:
			const char *what(void) const throw(){
				return ("Grade to Hight");
			}
	};
	class GradeTooLowException : public std::exception {
		public:
			const char *what(void) const throw(){
				return ("Grade to Low");
			}
	};
	Form(std::string name, int gradeExec, int gradeSign);
	Form(const Form &other); // Copy constructor
	Form &operator=(const Form &rhs); // Copy assignment overload
	~Form(); // Default destructor
	void gradeExeption(const int grade);
	std::string getName() const;
	int getGradeExec() const;
	int getGradeSign() const;
	bool getSign() const;
	void beSigned(Bureaucrat &bureaucrat);

private:
	Form(); // Default constructor
	const std::string _name;
	const int _gradeExec;
	const int _gradeSign;
	bool _sign;

};

std::ostream &operator<<(std::ostream &out, const Form &form);


#endif // FORM_HPP_