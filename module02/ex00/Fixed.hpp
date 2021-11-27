//
// Created by Mauro Early on 11/23/21.
//

#ifndef CPP_FIXED_HPP
#define CPP_FIXED_HPP

#include <iostream>

class Fixed {

private:
	int					_fixedPointValue;
	static const int	_numberFractionalBits;

public:
	Fixed();
	~Fixed();
	Fixed(const Fixed &other);

	int	getRawBits(void) const;
	void setRawBits(int const raw);

	Fixed &operator=(const Fixed &other);

};


#endif //CPP_FIXED_HPP
