#include "inc/Zombie.hpp"
#include "inc/colors.hpp"

Zombie::Zombie(){
}

Zombie::Zombie(std::string name) : _name(name){
}

Zombie::~Zombie(){
	std::cout << RED << _name << ": Zombie delete" << RESET << std::endl;
}

void Zombie::announce(){
	std::cout << GREEN << _name << ": BraiiiiiiinnnzzzZ..." << RESET << std::endl;
}
