#ifndef HUMANB_HPP_
#define HUMANB_HPP_

#include "Weapon.hpp"
#include <iostream>

// Class declaration
class HumanB {
	public:
		HumanB(); //default constructor
		HumanB(std::string name);
		HumanB(std::string name, Weapon *weapon);
		HumanB(const HumanB &other); //copy constructor
		HumanB &operator=(const HumanB &rhs); //overload operator
		~HumanB(); //destructor
		void attack() const;
		void setWeapon(Weapon &weapon);

	private:
		std::string _name;
		Weapon *_weapon;

};

#endif // HUMANB_HPP_