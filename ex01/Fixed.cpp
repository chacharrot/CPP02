#include "Fixed.hpp"

Fixed::Fixed() : value(0)
{
	std::cout << "Default constuctor    " << this << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Destructor    " << this << std::endl;
}

Fixed::Fixed(const Fixed &other): value(other.value)
{
	std::cout << "Copy constuctor  " << this << std::endl;
}

Fixed::Fixed (int const valueInt)
{
	this->value = valueInt << fixed;
	std::cout << "Int constuctor " << this <<  std::endl;
}

Fixed::Fixed (float const valueFloat)
{
	this->value = roundf(valueFloat * (1 << fixed));
	std::cout << "Float constuctor " << this <<  std::endl;
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