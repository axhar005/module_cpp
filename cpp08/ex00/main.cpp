#include <iostream>
#include <vector>
#include <map>
#include "inc/easyfind.hpp"


int main(void){
	std::vector<int> vec;

	try{
		std::cout << easyfind(vec, 19) << std::endl;
	}catch(const std::exception &e){
		std::cout << e.what() << std::endl;
	}
	vec.push_back(10);  // 0
	vec.push_back(4);   // 1
	vec.push_back(19);  // 2
	vec.push_back(120); // 3
	try{
		std::cout << easyfind(vec, 19) << std::endl;
	}catch(const std::exception &e){
		std::cout << e.what() << std::endl;
	}

	return 0;
}