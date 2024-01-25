#ifndef BUREAUCRAT_HPP_
#define BUREAUCRAT_HPP_

#define CALL true

#include <iostream>

// Class declaration
class Bureaucrat {
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
	Bureaucrat(); // Default constructor
	Bureaucrat(std::string name, int grade);
	Bureaucrat(const Bureaucrat &other); // Copy constructor
	Bureaucrat &operator=(const Bureaucrat &rhs); // Copy assignment overload
	~Bureaucrat(); // Default destructor
	std::string getName() const;
	int getGrade() const;
	void gradeIncrease(int i);
	void gradeDecrease(int i);

private:
	void setGrade(int grade);
	const std::string _name;
	int _grade;

};

std::ostream &operator<<(std::ostream &out, const Bureaucrat &bureaucrat);

#endif // BUREAUCRAT_HPP_