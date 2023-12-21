#include "inc/ClapTrap.hpp"
#include "inc/ScavTrap.hpp"
#include <iostream>

int main(void){
	ClapTrap gerard("Gerard");
	ScavTrap roger("Roger");
	ScavTrap gill("Gill");

	// hp test
	roger.stats();
	roger.attack("Gille");
	for (int i = 0; i < 5; i++)
		roger.takeDamage(10);
	roger.beRepaired(50);
	roger.guardGate();
	roger.takeDamage(100);
	roger.attack("Gille");
	roger.guardGate();
	roger.stats();

	
	// ep test
	gill.stats();
	gill.guardGate();
	for (int i = 0; i < 50; i++)
		gill.attack("Roger");
	gill.guardGate();
	gill.beRepaired(10);
	gill.attack("Roger");
	gill.takeDamage(10);
	gill.stats();
	
	return (0);
}