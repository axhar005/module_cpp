#include <iostream>
#include "inc/Bureaucrat.hpp"
#include "inc/AForm.hpp"
#include "inc/colors.hpp"
#include "inc/ShrubberyCreationForm.hpp"
#include "inc/RobotomyRequestForm.hpp"
#include "inc/PresidentialPardonForm.hpp"
#include "inc/Intern.hpp"

int main(void){
	Bureaucrat bob("bob", 1);
	Intern intern;
	AForm *rrf1;
	AForm *rrf2;
	AForm *rrf3;
	AForm *rrf4;
	try{
		std::cout << "--------------------------------------" << std::endl;
		rrf1 = intern.makeForm("shrubbery request", "bob");
		rrf2 = intern.makeForm("robotomy request", "bob");
		rrf3 = intern.makeForm("presidential request", "bob");
		rrf4 = intern.makeForm("hsadhjasg request", "bob");
		std::cout << "--------------------------------------" << std::endl;
		rrf1->beSigned(bob);
		bob.executeForm(*rrf1);
		bob.executeForm(*rrf2);
		bob.executeForm(*rrf3);
	}catch(const std::exception& e){
		std::cout << e.what() << std::endl;
	}
	delete rrf1;
	delete rrf2;
	delete rrf3;
}