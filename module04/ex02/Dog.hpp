//
// Created by Mauro Early on 11/29/21.
//

#ifndef CPP_DOG_HPP
#define CPP_DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog: public Animal {
private:
	Brain *_brain;
public:
	Dog();
	Dog(Dog &obj);
	Dog &operator=(Dog &obj);
	~Dog();

	Brain *getBrain();
	void makeSound() const;
};


#endif //CPP_DOG_HPP
