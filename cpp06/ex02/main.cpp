#include <iostream>

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
		std::cout << "A as been generate\n";
		return (new A);
	case 1:
		std::cout << "B as been generate\n";
		return (new B);
	default :
		std::cout << "C as been generate\n";
		return (new C);
	}
}

void identify(Base* p){
	A *ptrA = dynamic_cast<A*>(p);
	B *ptrB = dynamic_cast<B*>(p);
	C *ptrC = dynamic_cast<C*>(p);
	if (ptrA != NULL)
		std::cout << "A\n";
	else if (ptrB != NULL)
		std::cout << "B\n";
	else if (ptrC != NULL)
		std::cout << "C\n";
}

void identify(Base& p){
	try{
		(void)dynamic_cast<A&>(p);
		std::cout << "A\n";
		return;
	}catch(const std::exception& e) {}
	try{
		(void)dynamic_cast<B&>(p);
		std::cout << "B\n";
		return;
	}catch(const std::exception& e) {}
	try{
		(void)dynamic_cast<C&>(p);
		std::cout << "C\n";
		return;
	}catch(const std::exception& e) {}
	std::cout << "unknown\n";
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