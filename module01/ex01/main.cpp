#include "Zombie.hpp"

int main() {

	int N = 10;

	Zombie	*zombies = zombieHorde(N, "Amigo");

	std::cout << std::endl;
	zombies->announce();
	std::cout << std::endl;

	for (int i = 0; i < N; i++) {
		zombies[i].announce();
	}

	delete[] zombies;

	return 0;
}
