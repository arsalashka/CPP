#include "Converter.hpp"

#include "Converter.hpp"

int	main(int ac, char **av) {

	try {
		if (ac == 2)
			Converter converter(av[1]);
		else
			std::cout << MAGENTA << "Wrong number of arguments" << RESET
			        << std::endl;
	} catch (const std::exception &ex) {
		std::cerr << RED << ex.what() << RESET << std::endl;
	}

	return 0;
}


