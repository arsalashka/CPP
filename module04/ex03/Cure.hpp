//
// Created by Mauro Early on 11/30/21.
//

#ifndef CPP_CURE_HPP
#define CPP_CURE_HPP

#include "AMateria.hpp"

class Cure: public AMateria {
public:
	Cure();
	Cure(Cure &obj);
	Cure &operator=(Cure &obj);
	~Cure();

	AMateria* clone() const;
	void use(ICharacter& target);
};


#endif //CPP_CURE_HPP
