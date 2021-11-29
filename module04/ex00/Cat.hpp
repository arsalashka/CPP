//
// Created by Mauro Early on 11/29/21.
//

#ifndef CPP_CAT_HPP
#define CPP_CAT_HPP

#include "Animal.hpp"

class Cat: public Animal{
public:
	Cat();
	Cat(Cat &obj);
	Cat &operator=(Cat &obj);
	~Cat();

	void makeSound() const;
};


#endif //CPP_CAT_HPP
