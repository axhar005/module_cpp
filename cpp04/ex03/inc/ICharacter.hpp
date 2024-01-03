#ifndef ICHARACTER_HPP_
#define ICHARACTER_HPP_

#define MAX_EQUIPED 4
#define MAX_DROPPED 400

class AMateria;

#include <iostream>

// Class declaration
class ICharacter {
public:
	virtual ~ICharacter() {}
	virtual std::string const & getName() const = 0;
	virtual void equip(AMateria* m) = 0;
	virtual void unequip(int idx) = 0;
	virtual void use(int idx, ICharacter& target) = 0;
};

#endif // ICHARACTER_HPP_