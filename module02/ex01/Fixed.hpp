//
// Created by Mauro Early on 11/23/21.
//

#ifndef CPP_FIXED_HPP
#define CPP_FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed {

private:
	int					_fixedPointValue;
	static const int	_numberFractionalBits;

public:
	Fixed();
	~Fixed();
	Fixed(const Fixed &other);
	Fixed(const int i);
	Fixed(const float f);

	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	Fixed	&operator=(const Fixed &other);
	float	toFloat(void) const;
	int		toInt(void) const;
};

std::ostream	&operator<<(std::ostream &out, Fixed const &other);

#endif //CPP_FIXED_HPP
