#include "inc/FragTrap.hpp"
#include <iostream>

int main(void){
	FragTrap roger("Roger");
	FragTrap gill("Gill");

	// hp test
	roger.stats();
	roger.attack("Gille");
	for (int i = 0; i < 5; i++)
		roger.takeDamage(10);
	roger.beRepaired(50);
	roger.highFivesGuys();
	roger.takeDamage(100);
	roger.attack("Gille");
	roger.highFivesGuys();
	roger.stats();

	
	// ep test
	gill.stats();
	gill.highFivesGuys();
	for (int i = 0; i < 30; i++)
		gill.attack("Roger");
	gill.highFivesGuys();
	gill.beRepaired(10);
	gill.attack("Roger");
	gill.takeDamage(10);
	gill.stats();
	
	return (0);
}