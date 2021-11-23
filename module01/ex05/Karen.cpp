
#include "Karen.hpp"

void Karen::debug() {
	std::cout << "DEBUG" << std::endl;
}

void Karen::info() {
	std::cout << "INFO" << std::endl;
}

void Karen::warning() {
	std::cout << "WARNING" << std::endl;
}

void Karen::error() {
	std::cout << "ERROR" << std::endl;
}

void Karen::wrong() {
	std::cout << "WRONG LEVEL" << std::endl;
}

void Karen::complain(std::string level) {

	method methods[5];

	methods[0] = &Karen::debug;
	methods[1] = &Karen::info;
	methods[2] = &Karen::warning;
	methods[3] = &Karen::error;
	methods[4] = &Karen::wrong;


	std::string strings[4];

	strings[0] = "DEBUG";
	strings[1] = "INFO";
	strings[2] = "WARNING";
	strings[3] = "ERROR";

	int i = 0;
	while (i < 4 && level.compare(strings[i]) != 0)
		i++;

	(this->*methods[i])();

}