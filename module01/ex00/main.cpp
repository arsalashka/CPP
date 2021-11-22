
#include "Zombie.hpp"

int main() {

	Zombie *a;

	a = newZombie("Jack");
	a->announce();

	randomChump("Sara");

	a->announce();
	delete a;

	return 0;
}
