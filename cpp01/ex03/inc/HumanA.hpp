#ifndef HUMANA_HPP_
#define HUMANA_HPP_

#include "Weapon.hpp"
#include <iostream>

// Class declaration
class HumanA {
	public:
		HumanA(std::string name, Weapon &weapon); //default constructor
		HumanA(const HumanA &other); //copy constructor
		HumanA &operator=(const HumanA &rhs); //overload operator
		~HumanA(); //destructor
		void attack() const;
		void setWeapon(Weapon &weapon);
		
	private:
		std::string _name;
		Weapon &_weapon;
};

#endif // HUMANA_HPP_