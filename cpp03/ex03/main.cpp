#include "inc/DiamondTrap.hpp"
#include "inc/FragTrap.hpp"
#include <iostream>

int main(void){
	DiamondTrap roger("Roger");
	DiamondTrap gill("Gill");

	// hp test
	roger.stats();
	roger.attack("Gille");
	roger.whoAmI();
	for (int i = 0; i < 5; i++)
		roger.takeDamage(10);
	roger.beRepaired(50);
	roger.highFivesGuys();
	roger.takeDamage(100);
	roger.attack("Gille");
	roger.highFivesGuys();
	roger.whoAmI();
	roger.stats();

	
	// ep test
	gill.stats();
	gill.whoAmI();
	gill.highFivesGuys();
	for (int i = 0; i < 10; i++)
		gill.attack("Roger");
	gill.highFivesGuys();
	gill.beRepaired(10);
	gill.attack("Roger");
	gill.takeDamage(10);
	gill.whoAmI();
	gill.stats();
	
	return (0);
}