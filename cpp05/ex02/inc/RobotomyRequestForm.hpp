#ifndef ROBOTOMYREQUESTFORM_HPP_
#define ROBOTOMYREQUESTFORM_HPP_

#include "AForm.hpp"

// Class declaration
class RobotomyRequestForm : public AForm{
public:
	RobotomyRequestForm(); // Default constructor
	RobotomyRequestForm(std::string target);
	RobotomyRequestForm(const RobotomyRequestForm &other); // Copy constructor
	RobotomyRequestForm &operator=(const RobotomyRequestForm &rhs); // Copy assignment overload
	~RobotomyRequestForm(); // Default destructor
	std::string getTarget() const;
	virtual void execute(Bureaucrat const & executor) const;

private:
	std::string _target;

};

#endif // ROBOTOMYREQUESTFORM_HPP_