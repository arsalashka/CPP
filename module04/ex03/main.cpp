//
// Created by Mauro Early on 11/30/21.
//

#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"

int main() {

////	const AMateria *ice = new AMateria("ice");
//
//
//
//
//	AMateria *ice = new Ice();
////	std::cout << ice->getType() << std::endl;
//
//	AMateria *cure = new Cure();
////	std::cout << cure->getType() << std::endl;
//
//
//	ICharacter *p = new Character("p");
//	p->equip(ice);
//	p->equip(cure);
//
//	ice->use(*p);
//
//	ICharacter *b(p);
//
//	ICharacter *c = b;
//
//	c->use(0, *p);
//	c->use(1, *b);
//	c->use(2, *p);
//	c->use(3, *p);
//
//	c->unequip(1);
//	c->use(1, *b);
//
//
//
////	delete b;
//	delete c;
//
//
//	std::cout << YELLOW << "\n=======================================\n"
//			  << RESET << std::endl;
//
//
//	ICharacter *player1 = new Character("Player1");
//	ICharacter *player2 = new Character("Player2");
//	ICharacter *boss = new Character("Boss");
//
//
//	player1->equip(ice);
//	player2->equip(ice);
//	player1->equip(cure);
//	player2->equip(cure);
//	boss->equip(ice);
//
//	boss->use(0, *player1);
//	player2->use(1, *player1);
//	player1->use(0, *boss);
//	player2->use(0, *boss);
//
//	std::cout << YELLOW << "\n=======================================\n"
//		<< RESET << std::endl;
//
//	player1->use(0, *player2);
//	player1->use(1, *player2);
//	player1->use(2, *boss);
//	player1->use(3, *boss);
//
//
//	std::cout << YELLOW << "\n====COPY=TEST==========================\n"
//			  << RESET << std::endl;
//
//	ICharacter *test1(player1);
//
//	test1->use(0, *boss);
//	test1->use(1, *boss);
//	test1->use(2, *boss);
//
//
//	std::cout << YELLOW << "\n====COPY=TEST==========================\n"
//			  << RESET << std::endl;
//
//	ICharacter *test2;
//	test2 = player2;
//
//	test2->use(0, *test1);
//	test2->use(1, *test1);
//
//	std::cout << YELLOW << "\n======SRCS=============================\n"
//			  << RESET << std::endl;
//
//
//
//
//
//
//
//
//	delete test2;
//	delete test1;
//	delete boss;
//
////	delete player2;
////	delete player1;
//
//	delete cure;
//	delete ice;
//
//
//	return 0;


	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* me = new Character("me");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);

	delete tmp;

	tmp = src->createMateria("cure");
	me->equip(tmp);

	delete tmp;

	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	delete bob;
	delete me;
	delete src;
	return 0;

}