#ifndef BUREAUCRAT_HPP_
#define BUREAUCRAT_HPP_

#define CALL 0

#include <iostream>
class Form;

// Class declaration
class Bureaucrat {
public:
	class GradeTooHighException : public std::exception {
		public:
			const char *what(void) const throw(){
				return ("Grade too Hight");
			}
	};
	class GradeTooLowException : public std::exception {
		public:
			const char *what(void) const throw(){
				return ("Grade too Low");
			}
	};
	Bureaucrat(); // Default constructor
	Bureaucrat(std::string name, int grade);
	Bureaucrat(const Bureaucrat &other); // Copy constructor
	Bureaucrat &operator=(const Bureaucrat &rhs); // Copy assignment overload
	~Bureaucrat(); // Default destructor
	std::string getName() const;
	int getGrade() const;
	void gradeIncrease(int i);
	void gradeDecrease(int i);
	void signForm(Form &form) const;

private:
	void setGrade(int grade);
	const std::string _name;
	int _grade;

};

std::ostream &operator<<(std::ostream &out, const Bureaucrat &bureaucrat);

#endif // BUREAUCRAT_HPP_