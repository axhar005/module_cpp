#include <iostream>
#include "inc/Bureaucrat.hpp"
#include "inc/AForm.hpp"
#include "inc/colors.hpp"
#include "inc/PresidentialPardonForm.hpp"


int main(void){
	Bureaucrat bob("bob", 1);
	PresidentialPardonForm a(bob.getName());
	std::cout << "--------------------------------------" << std::endl;
	a.execute(bob);
	std::cout << "--------------------------------------" << std::endl;
}