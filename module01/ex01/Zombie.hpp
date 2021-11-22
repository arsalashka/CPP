//
// Created by Mauro Early on 11/22/21.
//

#ifndef EX00_ZOMBIE_HPP
#define EX00_ZOMBIE_HPP

#include <iostream>

class Zombie {
private:
	std::string name;
public:
	Zombie();
	Zombie(std::string name);
	~Zombie();

	void	setName(std::string name);
	void	announce();
};
	Zombie* zombieHorde( int N, std::string name );


#endif //EX00_ZOMBIE_HPP
