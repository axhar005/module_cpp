#include "Zombie.hpp"

int main()
{
	Zombie *a = newZombie("Zom1");
	a->announce();
	randomChump("Zom2");
	delete a;
}