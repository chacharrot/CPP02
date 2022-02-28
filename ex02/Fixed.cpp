#include "Fixed.hpp"

Fixed::Fixed () : value(0)
{
	std::cout << "Default constuctor  " << this << std::endl;
}

Fixed::Fixed (int const valueInt)
{
	this->value = valueInt << fixed;
	std::cout << "Int constuctor      " << this << std::endl;
}

Fixed::Fixed (float const valueFloat)
{
	this->value = roundf(valueFloat * (1 << fixed));
	std::cout << "Float constuctor    " << this << std::endl;
}

Fixed::Fixed (const Fixed &other)
{
	this->value = other.value;
	std::cout << "Copy constuctor     " << this << std::endl;
}

float	Fixed::toFloat (void) const 
{
	return ((float)value / (1 << fixed));
}

int	Fixed::toInt (void) const
{
	return (value >> fixed);
}

int	Fixed::getRawBits (void) const
{
	return value;
}

void	Fixed::setRawBits (int const raw)
{
	value = raw;
}

Fixed &	Fixed::operator = (Fixed const &other)
{
	this->value = other.getRawBits();
	return *this;
}

Fixed	Fixed::operator + (Fixed const &other) const
{
	return Fixed(this->toFloat() + other.toFloat());
}

Fixed	Fixed::operator - (Fixed const &other) const
{
	return Fixed(this->toFloat() - other.toFloat());
}

Fixed	Fixed::operator * (Fixed const &other) const
{
	return Fixed(this->toFloat() * other.toFloat());
}

Fixed	Fixed::operator / (Fixed const &other) const
{
	if (other.toFloat() == 0)
	{
		std::cout << "/ 0 is not acceptable" << std::endl;
		return 0;
	}
	return Fixed(this->toFloat() / other.toFloat());
}

Fixed &	Fixed::operator ++ (void)
{
	this->value++;
	return *this;
}

Fixed	Fixed::operator ++ (int)
{
	Fixed	temp;

	temp = (*this);
	this->value++;
	return temp;
}

Fixed &	Fixed::operator -- (void)
{
	this->value--;
	return *this;
}

Fixed	Fixed::operator -- (int)
{
	Fixed	temp;

	temp = (*this);
	this->value--;
	return temp;
}

Fixed &	Fixed::max (Fixed &a, Fixed &b)
{
	if (a > b)
		return a;
	else
		return b;
}

Fixed const & Fixed::max (Fixed const &a, Fixed const &b)
{
	if (a > b)
		return a;
	else
		return b;
}

Fixed &	Fixed::min (Fixed &a, Fixed &b)
{
	if (a < b)
		return a;
	else
		return b;
}

Fixed const & Fixed::min (Fixed const &a, Fixed const &b)
{
	if (a < b)
		return a;
	else
		return b;
}


bool	Fixed::operator > (Fixed const &other) const
{
	return (this->toFloat() > other.toFloat());
}

bool	Fixed::operator < (Fixed const &other) const
{
	return (this->toFloat() < other.toFloat());
}

bool	Fixed::operator == (Fixed const &other) const
{
	return (this->toFloat() == other.toFloat());
}

bool	Fixed::operator != (Fixed const &other) const
{
	return (this->toFloat() != other.toFloat());
}

bool	Fixed::operator >= (Fixed const &other) const
{
	return (this->toFloat() >= other.toFloat());
}

bool	Fixed::operator <= (Fixed const &other) const
{
	return (this->toFloat() <= other.toFloat());
}

Fixed::~Fixed()
{
	std::cout << this << " Destructor" << std::endl;
}

std::ostream & operator << (std::ostream &ost, Fixed const &other)
{
	ost << other.toFloat();
	return ost;
}