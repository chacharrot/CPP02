#include "Fixed.hpp"

Fixed::Fixed () : value(0)
{
	std::cout << this << " Default constuctor" << std::endl;
}

Fixed::Fixed (int const valueInt)
{
	this->value = valueInt << fixed;
	std::cout << this << " Int constuctor with value " << this->value << std::endl;
}

Fixed::Fixed (float const valueFloat)
{
	this->value = roundf(valueFloat * (1 << fixed));
	std::cout << this << " Float constuctor with value " << this->value << std::endl;
}

Fixed::Fixed(const Fixed &other)
{
	this->value = other.value;
	std::cout << this << " Copy constuctor" << std::endl;
}

float	Fixed::toFloat (void) const
{
	return ((float)value / (1 << fixed));
}

int	Fixed::toInt (void) const 
{
	return (value >> fixed);
}

int	Fixed::getRawBits(void) const 
{
	return value;
}

void	Fixed::setRawBits(int const raw)
{
	value = raw;
}

Fixed &	Fixed::operator = (Fixed const &other)
{
	this->value = other.getRawBits();
	return *this;
}

std::ostream &	operator << (std::ostream &ost, Fixed const &other)
{
	ost << other.toFloat();
	return ost;
}

Fixed::~Fixed()
{
	std::cout << this << " Destructor" << std::endl;
}