//
// Created by Mauro Early on 11/30/21.
//

#ifndef CPP_AMATERIA_HPP
#define CPP_AMATERIA_HPP

# define RESET		"\033[0m"
# define RED		"\033[31m"
# define GREEN		"\033[32m"
# define YELLOW		"\033[33m"
# define BLUE		"\033[34m"
# define PINK		"\033[35m"

#include <iostream>
#include "ICharacter.hpp"

class AMateria {
protected:
	std::string _type;
public:
	AMateria();
	AMateria(std::string const & type);
	AMateria(AMateria &obj);
	AMateria &operator=(AMateria &obj);
	virtual ~AMateria();

	std::string const &getType() const; //Returns the materia type

	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);
};


#endif //CPP_AMATERIA_HPP
