#include <exception>
#include <iostream>
#include "inc/Span.hpp"


void test1(){
	std::cout << GREEN "******************************************" << std::endl;
	Span sp = Span(1000);
	try{
		for (size_t i = 0; i < 1000; i++)
			sp.addNumber(i + 500);
		std::cout << "longest : " << sp.longestSpan() << " shortest : " << sp.shortestSpan() << std::endl;
	}catch(const std::exception &e){
		std::cout << e.what() << std::endl;
	}
	std::cout << GREEN "******************************************" RESET << std::endl;
}

void test2(){
	std::cout <<  MAGENTA "******************************************" << std::endl;
	Span sp = Span(5);
	try{
		for (size_t i = 0; i < 1000; i++)
			sp.addNumber(i + 500);
		std::cout << "longest : " << sp.longestSpan() << " shortest : " << sp.shortestSpan() << std::endl;
	}catch(const std::exception &e){
		std::cout << e.what() << std::endl;
	}
	std::cout << MAGENTA "******************************************" RESET << std::endl;
}

void test3(){
	std::cout << CYAN "******************************************" << std::endl;
	Span sp = Span(100);
	try{
		sp.addNumber(50);
		std::cout << "shortest : " << sp.shortestSpan() << " longest : " << sp.longestSpan() << std::endl;
	}catch(const std::exception &e){
		std::cout << e.what() << std::endl;
	}
	std::cout << CYAN "******************************************" RESET << std::endl;
}

void test4(){
	std::cout << YELLOW "******************************************" << std::endl;
	Span sp = Span(10000);
	try{
		for (size_t i = 0; i < 10000; i++)
			sp.addNumber(i);
		std::cout << "shortest : " << sp.shortestSpan() << " longest : " << sp.longestSpan() << std::endl;
	}catch(const std::exception &e){
		std::cout << e.what() << std::endl;
	}
	std::cout << YELLOW "******************************************" RESET << std::endl;
}

int main(void){
	try {
		Span sp = Span(10000);
		sp.rangeIterator(5000, 5);
		sp.rangeIterator(5000, 2000);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
		test1();
		test2();
		test3();
		test4();	
		sp.rangeIterator(5000, 2000);
	} catch (const std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	return 0;
}