#include "Converter.hpp"

Converter::Converter() {
	throw InvalidAction();
}

Converter::Converter(Converter &obj) {
	(void)obj;
	throw InvalidAction();
}

Converter &Converter::operator=(Converter &obj) {
	(void)obj;
	throw InvalidAction();
}

Converter::~Converter() {
}

bool Converter::isInf() {
	if ((_input.compare("inf") == 0) || (_input.compare("-inf") == 0)
		|| (_input.compare("+inf") == 0) || (_input.compare("-inf") == 0)
		|| (_input.compare("inff") == 0) || (_input.compare("-inff") == 0))
		return true;
	return false;
}

bool Converter::isNan() {
	if ((_input.compare("nan") == 0) || (_input.compare("nanf	") == 0))
		return true;
	return false;
}

const char*	Converter::InvalidAction::what(void) const throw() {
	return "Invalid action";
}

Converter::Converter(std::string input): _input(input) {

	this->_validSymbols[0] = 'f';
	this->_validSymbols[1] = '.';
	this->_validSymbols[2] = '+';
	this->_validSymbols[3] = '-';

	this->checkDot();
	this->getFractionPart();

	this->_int = "impossible";
	this->_doub = "impossible";
	this->_fl = "impossible";
	this->_ch = "impossible";

	this->checkChar();
	this->checkInt();
	this->checkFloat();
	this->checkDouble();

	std::cout << CYAN << "char:	" << this->_ch << RESET << std::endl;
	std::cout << GREEN << "int:	" << this->_int << RESET << std::endl;
	std::cout << MAGENTA << "float:	" << this->_fl << RESET << std::endl;
	std::cout << YELLOW << "double:	" << this->_doub << RESET <<std::endl;

}

void Converter::checkDot() {

	_dots = 0;
	_validInput = true;

	if(isInf() || isNan())
		return;
	else {
		for (size_t i = 0; i < _input.length(); i++) {

			if (_input[i] == '.') {
				_dots++;
			}
			else if (_input[i] == 'f' && i != _input.length() - 1) {
				_validInput = false;
				return ;
			}
			else if (!isdigit(_input[i]) && _input[i] != 'f'
					 && _input[i] != '.' && _input[i] != '+'
					 && _input[i] != '-') {
				_validInput = false;
				return ;
			}
			else if ((this->_input[i] == '+' || this->_input[i] == '-')
					 && (i != 0)) {
				_validInput = false;
				return ;
			}
		}
		if (_dots > 1) {
			_validInput = false;
			return ;
		}
	}
}

void		Converter::getFractionPart() {
	this->_fractionPart = 0;
	bool	dot = false;
	int		f = 0;
	for (size_t i = 0; i < this->_input.length(); i++) {

		if (this->_input[i] == '.') {
			dot = true;
			continue;
		}
		if (dot == true)
			f = f * 10 + atoi(std::string(1, this->_input[i]).c_str());
	}
	this->_fractionPart = f;
}

bool	Converter::isValidSym(const char sym) {
	for (size_t i = 0; i < 4; i++)
	{
		if (sym == this->_validSymbols[i])
			return true;
	}
	return false;
}

size_t Converter::getSizeWholePart() {
	size_t res = 0;
	for (size_t i = 0; i < this->_input.length(); i++)
	{
		if (this->_input[i] == '.')
			break;
		else
			res++;
	}
	return res;
}

bool	Converter::checkInt() {
	if (this->_validInput == false)
		return false;

	if (this->_input.length() == 0 || this->_input.length() > 11) {
		this->_int = "impossible";
		return false;
	}

	for (size_t i = 0; i < this->_input.length(); i++) {
		if (!isdigit(this->_input[i]) && !this->isValidSym(this->_input[i])) {
			this->_int = "impossible";
			return false;
		}
	}
	int		num = atoi(this->_input.c_str());
	long	num_l = atol(this->_input.c_str());
	long	check = static_cast<long>(num);
	if (check != num_l) {
		this->_int = "error";
		return false;
	}
	std::stringstream stream;
	stream << (atoi(this->_input.c_str()));
	std::string	num_str = stream.str();
	this->_int = num_str;
	return true;
}

bool	Converter::checkChar() {
	if ((this->_validInput == false || this->checkInt() == false) &&
	this->_input.length() > 1)
		return false;
	int	num = static_cast<int>(atoi(this->_input.c_str()));
	if (this->checkInt() == false && this->_input.length() == 1) {
		num = this->_input[0];
		this->_ch = std::string(1, this->_input[0]);
		std::stringstream stream;
		stream << num;
		std::string	num_str = stream.str();
		this->_int = num_str;
		this->_doub = num_str + ".0";
		this->_fl = num_str + ".0" + "f";
		return true;
	}
	if (num < 128 && num >= 0) {
		int	number = atoi(this->_input.c_str());
		if (isprint(number))
			this->_ch = std::string(1, static_cast<char>(number));
		else
			this->_ch = "Non displayable";
		return true;
	}
	this->_ch = "impossible";
	return false;
}

bool	Converter::checkDouble() {
	if (this->_validInput == false)
		return false;
	if (isInf() || isNan()) {
		if (this->_input.compare("inf") == 0 || this->_input.compare("inff") == 0 || \
			this->_input.compare("+inf") == 0 || this->_input.compare("+inff") == 0)
			this->_doub = "+inf";
		else if (this->_input.compare("-inf") == 0 || this->_input.compare("-inff") == 0)
			this->_doub = "-inf";
		else
			this->_doub = "nan";
		return true;
	}
	if (this->checkInt()) {
		std::stringstream stream;
		stream << (atof(this->_input.c_str()));
		std::string	num = stream.str();
		if (this->_fractionPart == 0) {
			num += ".0";
		}
		this->_doub = num;
		return true;
	}
	if (this->checkFloat()) {

		std::stringstream stream;
		stream << (atof(this->_input.c_str()));
		std::string	num = stream.str();
		if (this->_fractionPart == 0)
			num += ".0";
		this->_doub = num;
		return true;
	}
	std::stringstream stream;
	stream << (atof(this->_input.c_str()));
	std::string	num = stream.str();
	if (this->_fractionPart == 0)
		num += ".0";
	this->_doub = num;
	if (num.compare("inf") == 0)
		this->_doub = "+inf";
	return true;
}

bool	Converter::checkFloat()
{
	if (_validInput == false)
		return false;

	if (isInf() || isNan()) {
		if (_input.compare("inf") == 0 || _input.compare("inff") == 0 || \
			_input.compare("+inf") == 0 || _input.compare("+inff") == 0)
			_fl = "+inff";
		else if (_input.compare("-inf") == 0 || _input.compare("-inff") == 0)
			_fl = "-inff";
		else
			_fl = "nanf";
		return true;
	}
	if (this->checkInt()) {
		std::stringstream stream;
		stream << (atof(this->_input.c_str()));
		std::string	num = stream.str();
		if (this->_fractionPart == 0)
			num += ".0";
		num += "f";
		this->_fl = num;
		return true;
	}
	if (this->getSizeWholePart() > 0) {
		if (atof(_input.c_str()) > std::numeric_limits<float>::max()
				|| atof(_input.c_str()) < std::numeric_limits<float>::min()) {
			if (atof(_input.c_str()) > std::numeric_limits<float>::max())
				_fl = "+inff";
			else
				_fl = "-inff";
			return false;
		}
		std::stringstream stream;
		stream << (atof(_input.c_str()));
		std::string	num = stream.str();



		if (_fractionPart == 0)
			num += ".0";
		num += "f";
		_fl = num;
		return true;
	}
	else {
		_fl = "impossible";
		return false;
	}
}

