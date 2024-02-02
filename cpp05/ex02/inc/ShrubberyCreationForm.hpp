#ifndef SHRUBBERYCREATIONFORM_HPP_
#define SHRUBBERYCREATIONFORM_HPP_

#include "AForm.hpp"

// Class declaration
class ShrubberyCreationForm : public AForm{
public:
	ShrubberyCreationForm(); // Default constructor
	ShrubberyCreationForm(std::string target);
	ShrubberyCreationForm(const ShrubberyCreationForm &other); // Copy constructor
	ShrubberyCreationForm &operator=(const ShrubberyCreationForm &rhs); // Copy assignment overload
	~ShrubberyCreationForm(); // Default destructor
	virtual void execute(Bureaucrat const & executor) const;
	std::string getTarget() const;

private:
	std::string _target;
};

#endif // SHRUBBERYCREATIONFORM_HPP_