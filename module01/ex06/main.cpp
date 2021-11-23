
#include "Karen.hpp"

int main(int ac, char **av) {

	switch (ac) {
		case 2:
			Karen a;
			a.complain(av[1]);
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]"
				<< std::endl;
	}
	return 0;
}