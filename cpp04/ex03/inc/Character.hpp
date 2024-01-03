#ifndef CHARACTER_HPP_
#define CHARACTER_HPP_

#include "ICharacter.hpp"
#include "AMateria.hpp"

// Class declaration
class Character : public ICharacter{
public:
	Character();	// Default constructor
	Character(std::string name);
	Character(const Character &other); // Copy constructor
	Character &operator=(const Character &rhs);	// Copy assignment overload
	~Character();	// Default destructor
	std::string const & getName() const;
	void equip(AMateria* m);
	void unequip(int idx);
	void use(int idx, ICharacter& target);

private:
	int _floorIndex;
	std::string _name;
	AMateria *_book[4];
	AMateria *_floor[400];
};

#endif // CHARACTER_HPP_