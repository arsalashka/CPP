//
// Created by Mauro Early on 11/29/21.
//

#ifndef CPP_DOG_HPP
#define CPP_DOG_HPP

#include "Animal.hpp"

class Dog: public Animal{
public:
	Dog();
	Dog(Dog &obj);
	Dog &operator=(Dog &obj);
	~Dog();

	void makeSound() const;
};


#endif //CPP_DOG_HPP
