#include <iostream>
#include "inc/Bureaucrat.hpp"
#include "inc/AForm.hpp"
#include "inc/colors.hpp"
#include "inc/ShrubberyCreationForm.hpp"
#include "inc/RobotomyRequestForm.hpp"
#include "inc/PresidentialPardonForm.hpp"

int main(void){

	// ShrubberyCreationForm
	// ShrubberyCreationForm 	sign 145 : exec 137

	std::cout << "--------------------------------------" << std::endl;
	try{
		Bureaucrat bob("bob", 137);
		ShrubberyCreationForm a(bob.getName());
		a.beSigned(bob);
		bob.executeForm(a);
	}catch(const std::exception& e){
		std::cout << RED << e.what() << RESET << std::endl;
	}
	std::cout << "--------------------------------------" << std::endl;
	std::cout << "--------------------------------------" << std::endl;
	try{
		Bureaucrat bob("bob", 150);
		ShrubberyCreationForm a(bob.getName());
		a.beSigned(bob);
		bob.executeForm(a);
	}catch(const std::exception& e){
		std::cout << RED << e.what() << RESET << std::endl;
	}
	std::cout << "--------------------------------------" << std::endl;


	// RobotomyRequestForm
	// RobotomyRequestForm 		sign 72  : exec 45

	std::cout << "--------------------------------------" << std::endl;
	try{
		Bureaucrat bob("bob", 45);
		RobotomyRequestForm a(bob.getName());
		a.beSigned(bob);
		bob.executeForm(a);
	}catch(const std::exception& e){
		std::cout << RED << e.what() << RESET << std::endl;
	}
	std::cout << "--------------------------------------" << std::endl;
	std::cout << "--------------------------------------" << std::endl;
	try{
		Bureaucrat bob("bob", 80);
		RobotomyRequestForm a(bob.getName());
		a.beSigned(bob);
		bob.executeForm(a);
	}catch(const std::exception& e){
		std::cout << RED << e.what() << RESET << std::endl;
	}
	std::cout << "--------------------------------------" << std::endl;


	// PresidentialPardonForm
	// PresidentialPardonForm 	sign 25  : exec 5

	std::cout << "--------------------------------------" << std::endl;
	try{
		Bureaucrat bob("bob", 5);
		PresidentialPardonForm a(bob.getName());
		a.beSigned(bob);
		bob.executeForm(a);
	}catch(const std::exception& e){
		std::cout << RED << e.what() << RESET << std::endl;
	}
	std::cout << "--------------------------------------" << std::endl;
	std::cout << "--------------------------------------" << std::endl;
	try{
		Bureaucrat bob("bob", 30);
		PresidentialPardonForm a(bob.getName());
		a.beSigned(bob);
		bob.executeForm(a);
	}catch(const std::exception& e){
		std::cout << RED << e.what() << RESET << std::endl;
	}
	std::cout << "--------------------------------------" << std::endl;
}