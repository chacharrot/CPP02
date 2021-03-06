#pragma once
#include <iostream>
#include <cmath>

class Fixed {

public:
	Fixed ();
	Fixed (int const valueInt);
	Fixed (const Fixed &other);
	Fixed (float const valueFloat);
	Fixed &	operator = (Fixed const &other);
	~Fixed();

	int		toInt (void) const;
	float	toFloat (void) const;
	int		getRawBits (void) const;
	void	setRawBits (int const raw);

private:
	int					value;
	static const int	fixed = 8;

};

std::ostream &	operator << ( std::ostream &ost, Fixed const &other );
