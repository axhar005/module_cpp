#include "inc/Zombie.hpp"
#include <iostream>

int main()
{
	Zombie *horde = zombieHorde(10, "moi");
	for (size_t i = 0; i < 10; i++)
	{
		horde[i].announce();
	}
	
	delete[] horde;
}