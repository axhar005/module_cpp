#include "inc/Array.hpp"
#include "inc/colors.hpp"
#include <iomanip>

void testInt(){
	std::cout << CYAN "*********************" << std::endl;
	// init
	Array<int> a(5);
	Array<int> b(10);
	for (size_t i = 0; i < a.size(); i++)
		a[i] = i + 10;
	for (size_t i = 0; i < b.size(); i++)
		b[i] = i + 100;
	
	// print
	std::cout << "A size : " << a.size() << std::endl;
	for (size_t i = 0; i < a.size(); i++)
		std::cout << a[i] << " ";
	std::cout << std::endl;

	std::cout << "B size : " << b.size() << std::endl;
	for (size_t i = 0; i < b.size(); i++){
		std::cout << b[i] << " ";
		if (i == b.size())
			std::cout << std::endl;
	}
	std::cout << std::endl;
	a = b;
	std::cout << "A new size : " << a.size() << std::endl;
	for (size_t i = 0; i < a.size(); i++)
		std::cout << a[i] << " ";
	std::cout << std::endl;
	std::cout << "*********************" RESET << std::endl;
}

void testString(){
	std::cout << GREEN "\n*********************" << std::endl;
	// init
	Array<std::string> a(5);
	Array<std::string> b(10);
	for (size_t i = 0; i < a.size(); i++)
		a[i] = "A_dit_allo";
	for (size_t i = 0; i < b.size(); i++)
		b[i] = "B_dit_allo";
	
	// print
	std::cout << "A size : " << a.size() << std::endl;
	for (size_t i = 0; i < a.size(); i++)
		std::cout << a[i] << " ";
	std::cout << std::endl;

	std::cout << "B size : " << b.size() << std::endl;
	for (size_t i = 0; i < b.size(); i++){
		std::cout << b[i] << " ";
		if (i == b.size())
			std::cout << std::endl;
	}
	std::cout << std::endl;
	a = b;
	std::cout << "A new size : " << a.size() << std::endl;
	for (size_t i = 0; i < a.size(); i++)
		std::cout << a[i] << " ";
	std::cout << std::endl;
	std::cout << "*********************" RESET << std::endl;
}

void testDouble(){
	std::cout << MAGENTA "\n*********************" << std::endl;
	// init
	Array<double> a(5);
	Array<double> b(10);
	for (size_t i = 0; i < a.size(); i++)
		a[i] = 1.25 + 200 * i;
	for (size_t i = 0; i < b.size(); i++)
		b[i] = 584.5 + 18.45 * i;
	
	// print
	std::cout << "A size : " << a.size() << std::endl;
	for (size_t i = 0; i < a.size(); i++)
		std::cout << std::fixed << std::setprecision(2) << a[i] << " ";
	std::cout << std::endl;

	std::cout << "B size : " << b.size() << std::endl;
	for (size_t i = 0; i < b.size(); i++){
		std::cout << std::fixed << std::setprecision(2) << b[i] << " ";
		if (i == b.size())
			std::cout << std::endl;
	}
	std::cout << std::endl;
	a = b;
	b[0] = 21667325764572635765.356;
	std::cout << "A new size : " << a.size() << std::endl;
	for (size_t i = 0; i < a.size(); i++)
		std::cout << std::fixed << std::setprecision(2) << a[i] << " ";
	std::cout << std::endl;
	std::cout << "*********************" RESET << std::endl;

	try
	{
		b[200000];
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
}

int main(void){
	testInt();
	testString();
	testDouble();
	return 0;
}