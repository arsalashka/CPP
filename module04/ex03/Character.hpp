//
// Created by Mauro Early on 11/30/21.
//

#ifndef CPP_CHARACTER_HPP
#define CPP_CHARACTER_HPP

#include "AMateria.hpp"

class Character: public ICharacter {
private:
	std::string _name;
	AMateria	**_inventory;
	int _cntAMateria;
public:
	Character();
	Character(std::string name);
	Character(Character &obj);
	Character &operator=(Character &obj);
	~Character();

	int	getCntAMateria();

	std::string const & getName() const;
	void equip(AMateria* m);
	void unequip(int idx);
	void use(int idx, ICharacter& target);



};


#endif //CPP_CHARACTER_HPP
