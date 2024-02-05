#include <iostream>
#include "inc/colors.hpp"

class Base{
	public:
		virtual ~Base() {}
};
class A : public Base{
};
class B : public Base{
};
class C : public Base{
};

void randSeed() {
    std::srand(static_cast<unsigned>(std::time(NULL)));
}

Base *generate(void){
    int randNumber = std::rand() % 3;
	switch (randNumber)
	{
	case 0:
		std::cout << GREEN "A as been generate\n" RESET;
		return (new A);
	case 1:
		std::cout << GREEN "B as been generate\n" RESET;
		return (new B);
	default :
		std::cout << GREEN "C as been generate\n" RESET;
		return (new C);
	}
}

void identify(Base* p){
	A *ptrA = dynamic_cast<A*>(p);
	B *ptrB = dynamic_cast<B*>(p);
	C *ptrC = dynamic_cast<C*>(p);
	if (ptrA != NULL)
		std::cout << GREEN "A\n" RESET;
	else if (ptrB != NULL)
		std::cout << GREEN "B\n" RESET;
	else if (ptrC != NULL)
		std::cout << GREEN "C\n" RESET;
}

void identify(Base& p){
	try{
		(void)dynamic_cast<A&>(p);
		std::cout << GREEN "A\n" RESET;
		return;
	}catch(const std::exception& e) {}
	try{
		(void)dynamic_cast<B&>(p);
		std::cout << GREEN "B\n" RESET;
		return;
	}catch(const std::exception& e) {}
	try{
		(void)dynamic_cast<C&>(p);
		std::cout << GREEN "C\n" RESET;
		return;
	}catch(const std::exception& e) {}
	std::cout << RED "unknown\n" RESET;
}

int main(void){
	randSeed();
	Base *ptr1 = generate();
	identify(ptr1);
	Base *ptr2 = generate();
	identify(*ptr2);
	delete ptr1;
	delete ptr2;
	return (0);
}