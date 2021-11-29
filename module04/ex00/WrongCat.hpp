//
// Created by Mauro Early on 11/29/21.
//

#ifndef CPP_WRONGCAT_HPP
#define CPP_WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal {
public:
	WrongCat();
	WrongCat(WrongCat &obj);
	WrongCat &operator=(WrongCat &obj);
	~WrongCat();

	void makeSound() const;
};


#endif //CPP_WRONGCAT_HPP
