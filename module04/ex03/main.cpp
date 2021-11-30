//
// Created by Mauro Early on 11/30/21.
//

#include <iostream>
#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"

int main() {

//	const AMateria *ice = new AMateria("ice");




	AMateria *ice = new Ice();
//	std::cout << ice->getType() << std::endl;

	AMateria *cure = new Cure();
//	std::cout << cure->getType() << std::endl;


	Character p("p");
	p.equip(ice);
	p.equip(cure);

	Character t(p);




//
//	Character player1("Player1");
//	Character *player2 = new Character("Player2");
//	Character *boss = new Character("Boss");
//
//
//	player1.equip(ice);
//	player2->equip(ice);
//	player1.equip(cure);
//	player2->equip(cure);
//	boss->equip(ice);
//
//	boss->use(0, player1);
//	player2->use(1, player1);
//	player1.use(0, *boss);
//	player2->use(0, *boss);
//
//	std::cout << YELLOW << "\n=======================================\n"
//		<< RESET << std::endl;
//
//	player1.use(0, *player2);
//	player1.use(1, *player2);
//	player1.use(2, *boss);
//	player1.use(3, *boss);
//
//
//	std::cout << YELLOW << "\n====COPY=TEST==========================\n"
//			  << RESET << std::endl;
//
//	Character test1(player1);
//
//	test1.use(0, *boss);
//	test1.use(1, *boss);
//	test1.use(2, *boss);
//
//
//	std::cout << YELLOW << "\n====COPY=TEST==========================\n"
//			  << RESET << std::endl;
//
//	Character *test2;
//	test2 = player2;
//
//	test2->use(0, test1);
//	test2->use(1, test1);
//
//	std::cout << YELLOW << "\n=======================================\n"
//			  << RESET << std::endl;
//
//
////	delete test1;
//	delete test2;
//
////	delete player1;
//	delete player2;
//	delete boss;
//
//	delete cure;
//	delete ice;





	return 0;
}