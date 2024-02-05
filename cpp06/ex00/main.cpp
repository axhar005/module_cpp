#include <iostream>
#include "inc/utils.hpp"
#include "inc/Pars.hpp"

int main(int ac, char **av){
	if (ac != 2){
		std::cerr << "Use: " << av[0] << " <literal>" << std::endl;
		return 0;
	}
	Pars p(av[1]);
	p.setType();
}