//
// Created by Mauro Early on 11/29/21.
//

#ifndef CPP_CAT_HPP
#define CPP_CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat: public Animal {
private:
	Brain *_brain;
public:
	Cat();
	Cat(Cat &obj);
	Cat &operator=(Cat &obj);
	~Cat();

	Brain *getBrain();
	void makeSound() const;
};


#endif //CPP_CAT_HPP
