//
// Created by Mauro Early on 26/11/2021.
//

#ifndef CPP_CLAPTRAP_HPP
#define CPP_CLAPTRAP_HPP

#include <iostream>

class ClapTrap {

private:
	std::string	_name;
	int _hp;
	int _ep;
	int	_dmg;

public:
	ClapTrap();
	~ClapTrap();

	std::string getName();
	int	getHp();
	int getEp();
	int getDmg();
	void setName(std::string name);
	void setHp(int hp);
	void setEp(int ep);
	void setDmg(int dmg);

	void attack(std::string const &target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);




};


#endif //CPP_CLAPTRAP_HPP
