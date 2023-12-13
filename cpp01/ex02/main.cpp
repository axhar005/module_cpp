#include <iostream>

int main()
{
	std::string str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string &stringREF = str;

	std::cout << "string : " << &str << std::endl;
	std::cout << "string PTR : " << stringPTR << std::endl;
	std::cout << "string REF : " << &stringREF << std::endl;

	std::cout << "string REF : " << str << std::endl;
	std::cout << "string REF : " << *stringPTR << std::endl;
	std::cout << "string REF : " << stringREF << std::endl;

}