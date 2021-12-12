#include <iostream>
#include <stdint.h>

#define RESET   "\033[0m"
#define BLACK   "\033[30m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"
#define MAGENTA "\033[35m"
#define CYAN    "\033[36m"
#define WHITE   "\033[37m"

struct Data {
	int i;
};

uintptr_t serialize(Data* ptr) {

	uintptr_t param;

	param = reinterpret_cast<uintptr_t>(ptr);
	return param;
}

Data* deserialize(uintptr_t raw) {

	Data* ptr;

	ptr = reinterpret_cast<Data*>(raw);
	return ptr;
}

int main() {

	Data		struc;
	Data*		ptrStruc;
	uintptr_t	uIntPtr;

	struc.i = 100;
	std::cout << GREEN <<"struc.i =	" << struc.i << RESET << std::endl;


	uIntPtr = serialize(&struc);
	ptrStruc = deserialize(uIntPtr);

	std::cout << YELLOW << "ptrStruc->i =	" << ptrStruc->i << RESET
	        <<std::endl;
	std::cout << CYAN <<  "ptrStruc =	" << ptrStruc << RESET << std::endl;
	std::cout << MAGENTA << "&struc =	" << &struc << RESET << std::endl;

	return 0;
}
