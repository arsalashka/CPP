//
// Created by Mauro Early on 11/30/21.
//

#ifndef CPP_ICE_HPP
#define CPP_ICE_HPP

#include "AMateria.hpp"

class Ice: public AMateria {
public:
	Ice();
	Ice(Ice &obj);
	Ice &operator=(Ice &obj);
	~Ice();

	AMateria* clone() const;
	void use(ICharacter& target);
};


#endif //CPP_ICE_HPP
