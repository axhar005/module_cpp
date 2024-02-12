#include <iostream>
#include "inc/RPN.hpp"



int main(int ac, char **av)
{
	if (ac != 2){
		std::cout << "Use: " << av[0] << " <\"123-+1-2*\">" << std::endl;
		return (0);
	}
	try{
		RPN a(av[1]);
		a.step();
	}catch(const std::exception& e){
		std::cerr << e.what() << std::endl;
	}
	
	return 0;
}