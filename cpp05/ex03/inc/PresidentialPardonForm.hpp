#ifndef PRESIDENTIALPARDONFORM_HPP_
#define PRESIDENTIALPARDONFORM_HPP_

#include "Bureaucrat.hpp"
#include "AForm.hpp"

// Class declaration
class PresidentialPardonForm : public AForm{
public:
	PresidentialPardonForm(); // Default constructor
	PresidentialPardonForm(std::string target); // Default constructor
	PresidentialPardonForm(const PresidentialPardonForm &other); // Copy constructor
	PresidentialPardonForm &operator=(const PresidentialPardonForm &rhs); // Copy assignment overload
	~PresidentialPardonForm(); // Default destructor
	std::string getTarget() const;
	virtual void execute(Bureaucrat const & executor) const;

private:
	std::string _target;

};

#endif // PRESIDENTIALPARDONFORM_HPP_