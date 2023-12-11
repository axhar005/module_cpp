#ifndef ZOMBIE
# define ZOMBIE

#include <iostream>

class Zombie
{
  public:
	Zombie();
	Zombie(std::string name);
	~Zombie();
	void announce(void);
	void setName(std::string name);
  private:
	std::string	_name;
};

Zombie* zombieHorde( int N, std::string name );

#endif