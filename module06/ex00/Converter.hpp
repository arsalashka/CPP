#ifndef CPP_CONVERTER_HPP
#define CPP_CONVERTER_HPP

#define RESET   "\033[0m"
#define BLACK   "\033[30m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"
#define MAGENTA "\033[35m"
#define CYAN    "\033[36m"
#define WHITE   "\033[37m"

#include <iostream>
#include <sstream>

class Converter {
private:
	const std::string	_input;
	std::string 		_ch;
	std::string 		_int;
	std::string 		_doub;
	std::string 		_fl;
	char				_validSymbols[4];
	int					_dots;
	bool				_validInput;
	int 				_fractionPart;

	class InvalidAction: public std::exception {
	public:
		const char *what(void) const throw();
	};

	bool checkChar();
	bool checkInt();
	bool checkDouble();
	bool checkFloat();
	void checkDot();
	bool isInf();
	bool isNan();


	void	getFractionPart();
	size_t	getSizeWholePart();
	bool	isValidSym(const char sym);





public:
	Converter();
	Converter(std::string input);
	Converter(Converter &obj);
	Converter &operator=(Converter &obj);
	~Converter();


};


#endif //CPP_CONVERTER_HPP
