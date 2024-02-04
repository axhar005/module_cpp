#include "inc/Intern.hpp"
#include "inc/ShrubberyCreationForm.hpp"
#include "inc/RobotomyRequestForm.hpp"
#include "inc/PresidentialPardonForm.hpp"
#include "inc/colors.hpp"

// Default constructor
Intern::Intern() {
	return;
}

// Copy constructor
Intern::Intern(const Intern &other) {
	*this = other;
	return;
}

// Copy assignment overload
Intern &Intern::operator=(const Intern &rhs) {
	(void)rhs;
	return *this;
}

// Default destructor
Intern::~Intern() {
	return;
}

AForm* Intern::makeForm(std::string name, std::string target){
	int i;
	AForm *form = NULL;
	std::string form_name [] = {"shrubbery request", "robotomy request", "presidential request"};
	for (i = 0; i < 4; i++){
		if (form_name[i] == name)
			break;
	}
	switch (i)
	{
		case 0:
			form = new ShrubberyCreationForm(target);
			break;
		case 1:
			form = new RobotomyRequestForm(target);
			break;
		case 2:
			form = new PresidentialPardonForm(target);
			break;
		default:
			std::cout << RED "Form does not exist" RESET << std::endl;
			break;
	}
	if (form)
		std::cout << GREEN "Intern creates " << form->getName() << RESET << std::endl;
	return form;
}