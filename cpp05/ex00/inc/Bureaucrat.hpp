#ifndef BUREAUCRAT_HPP_
#define BUREAUCRAT_HPP_

#include <iostream>

// Class declaration
class Bureaucrat {
public:
	class GradeTooHighException : public std::exception {
		public:
			const char *what(void) const throw();
	};
	class GradeTooLowException : public std::exception {
		public:
			const char *what(void) const throw();
	};
	Bureaucrat(); // Default constructor
	Bureaucrat(std::string name, int grade);
	Bureaucrat(const Bureaucrat &other); // Copy constructor
	Bureaucrat &operator=(const Bureaucrat &rhs); // Copy assignment overload
	~Bureaucrat(); // Default destructor
	std::string getName() const;
	void setGrade(int grade);

private:
	const std::string _name;
	int _grade;

};

#endif // BUREAUCRAT_HPP_