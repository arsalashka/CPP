#include <iostream>
#include <string>
#include <fstream>

bool	replace(char **av) {

	std::string		file = av[1];
	std::string		s1 = av[2];
	std::string		s2 = av[3];
	std::ifstream	inFile(file);
	std::ofstream	outFile(file.append(".replace"));
	std::string 	str;
	unsigned long	index;

	if (!inFile) {
		std::cout << "Error: File not found!" << std::endl;
		return false;
	}

	while (std::getline(inFile, str)) {

		index = 0;
		while ((index = str.find(s1, index)) != std::string::npos) {
			str.erase(index, s1.length());
			str.insert(index, s2);
			index += s2.length();
		}
		outFile << str;
		if (!inFile.eof())
			outFile << std::endl;
	}
	inFile.close();
	outFile.close();
	return true;
}

int main(int ac, char **av) {

	if (ac != 4) {
		std::cout << "Wrong number of arguments!" << std::endl;
		return (1);
	}
	if (replace(av))
		std::cout << "Done!" << std::endl;
	else
		std::cout << "Something wrong!" << std::endl;
	return 0;
}
