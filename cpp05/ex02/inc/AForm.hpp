#ifndef AFORM_HPP_
#define AFORM_HPP_

#include <iostream>
#include "Bureaucrat.hpp"

// Class declaration
class AForm {
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
	AForm(); // Default constructor
	AForm(std::string name, int gradeExec, int gradeSign);
	AForm(const AForm &other); // Copy constructor
	AForm &operator=(const AForm &rhs); // Copy assignment overload
	~AForm(); // Default destructor
	void gradeExeption(const int grade);
	std::string getName() const;
	int getGradeExec() const;
	int getGradeSign() const;
	bool getSign() const;
	void beSigned(Bureaucrat &bureaucrat);
	virtual void execute(Bureaucrat const & executor) const = 0;

private:
	const std::string _name;
	const int _gradeExec;
	const int _gradeSign;
	bool _sign;

};

std::ostream &operator<<(std::ostream &out, const AForm &AForm);


#endif // AFORM_HPP_