#include <iostream>
#include "inc/Span.hpp"


void test1(){
	std::cout << "******************************************" << std::endl;
	Span sp = Span(1000);
	try{
		for (size_t i = 0; i < 1000; i++)
			sp.addNumber(i + 500);
		std::cout << "longest : " << sp.longestSpan() << " shortest : " << sp.shortestSpan() << std::endl;
	}catch(const std::exception &e){
		std::cout << e.what() << std::endl;
	}
	std::cout << "******************************************" << std::endl;
}

void test2(){
	std::cout << "******************************************" << std::endl;
	Span sp = Span(5);
	try{
		for (size_t i = 0; i < 1000; i++)
			sp.addNumber(i + 500);
		std::cout << "longest : " << sp.longestSpan() << " shortest : " << sp.shortestSpan() << std::endl;
	}catch(const std::exception &e){
		std::cout << e.what() << std::endl;
	}
	std::cout << "******************************************" << std::endl;
}

void test3(){
	std::cout << "******************************************" << std::endl;
	Span sp = Span(100);
	try{
		sp.addNumber(50);
		std::cout << "shortest : " << sp.shortestSpan() << " longest : " << sp.longestSpan() << std::endl;
	}catch(const std::exception &e){
		std::cout << e.what() << std::endl;
	}
	std::cout << "******************************************" << std::endl;
}

void test4(){
	std::cout << "******************************************" << std::endl;
	Span sp = Span(10000);
	try{
		for (size_t i = 0; i < 10000; i++)
			sp.addNumber(i);
		std::cout << "shortest : " << sp.shortestSpan() << " longest : " << sp.longestSpan() << std::endl;
	}catch(const std::exception &e){
		std::cout << e.what() << std::endl;
	}
	std::cout << "******************************************" << std::endl;
}

int main(void){
	Span sp = Span(5);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	test1();
	test2();
	test3();
	test4();
	return 0;
}