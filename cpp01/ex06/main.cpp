#include "inc/Harl.hpp"
#include "inc/colors.hpp"

int main(int ac, char **av){
	if (ac != 2){
		std::cout << RED << "Please follow this syntax   --->   <./HarlFilter> <\"arg\">" << RESET << std::endl;
		return (2);
	}
	Harl harl;
	std::string level(av[1]);
	int cmd = harl.complain(level);
	
	switch (cmd) {
		case(0):
			harl.say(cmd++);
		case(1):
			harl.say(cmd++);
		case(2):
			harl.say(cmd++);
		case(3):
			harl.say(cmd++);
			break;
		default:
			std::cout << GREEN << "[ Probably complaining about insignificant problems ]" << RESET << std::endl;
	}
	return (0);
}