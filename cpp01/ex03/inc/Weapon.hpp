#ifndef WEAPON_HPP_
#define WEAPON_HPP_

#include <iostream>

// Class declaration
class Weapon {
	
	public:
		Weapon(std::string type);
		Weapon(const Weapon &other);
		Weapon &operator=(const Weapon &rhs);
		~Weapon();
		const std::string &getType() const;
		void setType(std::string type);
		
	private:
		std::string _type;

};

#endif // WEAPON_HPP_
