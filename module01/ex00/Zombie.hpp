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

	void	announce();
};

	Zombie *newZombie(std::string name);
	void	randomChump(std::string name);


#endif //EX00_ZOMBIE_HPP
