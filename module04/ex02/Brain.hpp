//
// Created by Mauro Early on 11/29/21.
//

#ifndef CPP_BRAIN_HPP
#define CPP_BRAIN_HPP

# define RESET		"\033[0m"
# define RED		"\033[31m"
# define GREEN		"\033[32m"
# define YELLOW		"\033[33m"
# define BLUE		"\033[34m"
# define PINK		"\033[35m"

#include <iostream>
//#include <string>

class Brain {
private:
	std::string _ideas[100];
public:
	Brain();
	Brain(Brain &obj);
	Brain &operator=(Brain &obj);
	~Brain();

	std::string *getIdeas();
};


#endif //CPP_BRAIN_HPP
