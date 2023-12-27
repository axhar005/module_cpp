#include "inc/ClapTrap.hpp"
#include <iostream>

int main(void){
	ClapTrap bob("bob");
	ClapTrap kevin("kevin");

	bob.attack("kevin");
	bob.beRepaired(10);
	bob.takeDamage(30);
	bob.attack("kevin");
	bob.stats();

	kevin.stats();
	kevin = bob;
	kevin.stats();
}