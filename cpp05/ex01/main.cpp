#include <iostream>
#include "inc/Bureaucrat.hpp"


int main(void){
	std::cout << "--------------------------------------" << std::endl;
	Bureaucrat *bob;
	try{
		bob = new Bureaucrat("Jean-Pierre", 6);
		bob->gradeIncrease(0);
		std::cout << *bob << std::endl;
	}
	catch(const std::exception& e){
		std::cout << e.what() << std::endl;
	}

	std::cout << "--------------------------------------" << std::endl;
	try{
		Bureaucrat a("Robert", 10);
		a.gradeIncrease(0);
		std::cout << a << std::endl;
	}
	catch(const std::exception& e){
		std::cout << e.what() << std::endl;
	}
	
	std::cout << "--------------------------------------" << std::endl;
	try{
		Bureaucrat a("Ginette", -123);
		std::cout << a << std::endl;
	}
	catch(const std::exception& e){
		std::cout << e.what() << std::endl;
	}

	std::cout << "--------------------------------------" << std::endl;
	try{
		Bureaucrat a("Ginette", 6);
		a.gradeIncrease(182);
		std::cout << a << std::endl;
	}
	catch(const std::exception& e){
		std::cout << e.what() << std::endl;
	}

	std::cout << "--------------------------------------" << std::endl;
	try{
		Bureaucrat a("Paule", 182);
		std::cout << a << std::endl;
	}
	catch(const std::exception& e){
		std::cout << e.what() << std::endl;
	}

	std::cout << "--------------------------------------" << std::endl;
	try{
		Bureaucrat a("Paule", 6);
		a.gradeDecrease(182);
		std::cout << a << std::endl;
	}
	catch(const std::exception& e){
		std::cout << e.what() << std::endl;
	}

	std::cout << "--------------------------------------" << std::endl;
	return(0);
}