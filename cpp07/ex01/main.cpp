#include "inc/template.hpp"
#include "inc/colors.hpp"

void testInt(){
	std::cout << CYAN "*********************" << std::endl;
	int array[4] = {1, 2, 3, 4};
	for (size_t i = 0; i < 4; i++)
		std::cout << array[i] << std::endl;
	std::cout << "---------------------" << std::endl;
	iter(array, 4, data);
	for (size_t i = 0; i < 4; i++)
		std::cout << array[i] << std::endl;
	std::cout << "*********************" RESET<< std::endl;
	std::cout << std::endl;
}

void testString(){
	std::cout << GREEN "*********************" << std::endl;
	std::string array[4] = {"allo", "bonjour", "salut", "bienvenue"};
	for (size_t i = 0; i < 4; i++)
		std::cout << array[i] << std::endl;
	std::cout << "---------------------" << std::endl;
	iter(array, 4, data);
	for (size_t i = 0; i < 4; i++)
		std::cout << array[i] << std::endl;
	std::cout << "*********************" RESET<< std::endl;
	std::cout << std::endl;
}

int main(void){
	testInt();
	testString();
	return 0;
}