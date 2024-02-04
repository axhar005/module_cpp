#include <iostream>
#include "inc/Bureaucrat.hpp"
#include "inc/AForm.hpp"
#include "inc/colors.hpp"
#include "inc/ShrubberyCreationForm.hpp"
#include "inc/RobotomyRequestForm.hpp"
#include "inc/PresidentialPardonForm.hpp"
#include "inc/Intern.hpp"

int main(void){

	Intern intern;
	AForm *rrf;

	std::cout << "--------------------------------------" << std::endl;
	rrf = intern.makeForm("shrubbery request", "bob");

	std::cout << "--------------------------------------" << std::endl;

}