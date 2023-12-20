#include "inc/Fixed.hpp"
#include <iostream>

int main( void ) {
	Fixed a(15);
	Fixed b(2);

	std::cout << "a      : " << a << std::endl;
	std::cout << "a + b  : " << a + b << std::endl;
	std::cout << "a - b  : " << a - b << std::endl;
	std::cout << "a * b  : " << a * b << std::endl;
	std::cout << "a / b  : " << a / b << std::endl;

	std::cout << "++a    : " << ++a << std::endl;
	std::cout << "a++    : " << a++ << std::endl;
	std::cout << "--a    : " << --a << std::endl;
	std::cout << "a--    : " << a-- << std::endl;

	std::cout << "a > b  : " << (a > b) << std::endl;
	std::cout << "a < b  : " << (a < b) << std::endl;
	std::cout << "a == b : " << (a == b) << std::endl;
	std::cout << "a != b : " << (a != b) << std::endl;
	std::cout << "a <= b : " << (a <= b) << std::endl;
	std::cout << "a >= b : " << (a >= b) << std::endl;

	std::cout << "min    : " << a.min(a, b) << std::endl;
	std::cout << "max    : " << a.max(a, b) << std::endl;

	return 0;
}