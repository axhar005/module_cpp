#include <iostream>
#include "inc/Bureaucrat.hpp"
#include "inc/Form.hpp"
#include "inc/colors.hpp"


int main(void){
	std::cout << "--------------------------------------" << std::endl;
	try{
		Bureaucrat a("karl", 2);
		Form b("bail", 3, 5);
		a.signForm(b);
		b.beSigned(a);
		std::cout << a << " : " << b << std::endl;
	}
	catch(const std::exception& e){
		std::cout << RED << e.what() << RESET << std::endl;
	}

	std::cout << "--------------------------------------" << std::endl;
	try{
		Bureaucrat a("karl", 2);
		Form b("bail", 3, 5);
		b.beSigned(a);
		a.signForm(b);
		std::cout << a << " : " << b << std::endl;
	}
	catch(const std::exception& e){
		std::cout << RED << e.what() << RESET << std::endl;
	}

	std::cout << "--------------------------------------" << std::endl;
	try{
		Bureaucrat a("karl", 2);
		Form b("bail", 12, 500);
		a.signForm(b);
		b.beSigned(a);
		std::cout << a << " : " << b << std::endl;
	}
	catch(const std::exception& e){
		std::cout << RED << e.what() << RESET << std::endl;
	}

	std::cout << "--------------------------------------" << std::endl;
	try{
		Bureaucrat a("karl", 2);
		Form b("bail", 500, 12);
		a.signForm(b);
		b.beSigned(a);
		std::cout << a << " : " << b << std::endl;
	}
	catch(const std::exception& e){
		std::cout << RED << e.what() << RESET << std::endl;
	}

	std::cout << "--------------------------------------" << std::endl;
	return(0);
}