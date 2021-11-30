//
// Created by Mauro Early on 11/28/21.
//

#ifndef CPP_ANIMAL_HPP
#define CPP_ANIMAL_HPP

# define RESET		"\033[0m"
# define RED		"\033[31m"
# define GREEN		"\033[32m"
# define YELLOW		"\033[33m"
# define BLUE		"\033[34m"
# define PINK		"\033[35m"

#include <iostream>

class Animal {
protected:
	std::string _type;
public:
	Animal();
	Animal(Animal &obj);
	Animal &operator=(Animal &obj);
	virtual ~Animal();

	virtual std::string	getType() const;
	virtual void makeSound() const = 0;
};


#endif //CPP_ANIMAL_HPP
