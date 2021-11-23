
#include "Karen.hpp"

void Karen::debug() {
	std::cout << "[DEBUG] I love to get extra bacon for my "
				 "7XL-double-cheese-triple-pickle-special-ketchup burger. "
				 "I just love it!" << std::endl;
}

void Karen::info() {
	std::cout << "[INFO] I cannot believe adding extra bacon cost more money. "
				 "You don’t put enough! If you did I would not have to ask "
				 "for it!" << std::endl;
}

void Karen::warning() {
	std::cout << "[WARNING] I think I deserve to have some extra bacon for "
				 "free. I’ve been coming here for years and you just started "
				 "working here last month." << std::endl;
}

void Karen::error() {
	std::cout << "[ERROR] This is unacceptable, I want to speak to "
				 "the manager now." << std::endl;
}

void Karen::wrong() {
	std::cout << "[ Probably complaining about insignificant "
				 "problems ]" << std::endl;
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

	switch(i) {
		case 0:
			(this->*methods[0])();
			std::cout << std::endl;
		case 1:
			(this->*methods[1])();
			std::cout << std::endl;
		case 2:
			(this->*methods[2])();
			std::cout << std::endl;
		case 3:
			(this->*methods[3])();
			std::cout << std::endl;
			break;
		default:
			(this->*methods[4])();
	}
}