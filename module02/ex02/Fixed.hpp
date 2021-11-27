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

	int		toInt(void) const;
	float	toFloat(void) const;

	Fixed	&operator=(const Fixed &other);
	bool	operator>(Fixed const &obj);
	bool	operator<(Fixed const &obj);
	bool	operator>=(Fixed const &obj);
	bool	operator<=(Fixed const &obj);
	bool	operator==(Fixed const &obj);
	bool	operator!=(Fixed const &obj);

	Fixed operator+(Fixed const &obj);
	Fixed operator-(Fixed const &obj);
	Fixed operator*(Fixed const &obj);
	Fixed operator/(Fixed const &obj);
	Fixed &operator++(void);
	Fixed operator++(int i);
	Fixed &operator--(void);
	Fixed operator--(int i);

	static Fixed &min(Fixed &f1, Fixed &f2);
	static Fixed &max(Fixed &f1, Fixed &f2);
	static  Fixed const &min(Fixed const &f1, Fixed const &f2);
	static  Fixed const &max(Fixed const &f1, Fixed const &f2);
	};

std::ostream	&operator<<(std::ostream &out, Fixed const &other);



#endif //CPP_FIXED_HPP
