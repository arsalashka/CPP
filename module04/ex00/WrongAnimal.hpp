//
// Created by Mauro Early on 11/29/21.
//

#ifndef CPP_WRONGANIMAL_HPP
#define CPP_WRONGANIMAL_HPP

# define RESET		"\033[0m"
# define RED		"\033[31m"
# define GREEN		"\033[32m"
# define YELLOW		"\033[33m"
# define BLUE		"\033[34m"
# define PINK		"\033[35m"

#include <iostream>

class WrongAnimal {
protected:
	std::string _type;
public:
	WrongAnimal();
	WrongAnimal(WrongAnimal &obj);
	WrongAnimal &operator=(WrongAnimal &obj);
	virtual ~WrongAnimal();

	std::string getType() const;
	void makeSound() const;
};


#endif //CPP_WRONGANIMAL_HPP
