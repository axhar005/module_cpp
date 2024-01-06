#include "inc/Zombie.hpp"
#include <string>
#include <sstream>

Zombie *zombieHorde(int N, std::string name){
	Zombie *arr = new Zombie[N];
	for (int i = 0; i < N; i++)
	{
		std::ostringstream na;
		na << name << i;
		arr[i].setName(na.str());
	}
	return (arr);
}