#include "Fixed.hpp"

Fixed::Fixed() : value(0)
{
	std::cout << "Default constuctor    " << this << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Destructor    " << this << std::endl;
}

Fixed::Fixed(const Fixed &rhs): value(rhs.value)
{
	std::cout << "Copy constuctor  " << this << std::endl;
}

int	Fixed::getRawBits(void) const 
{
	std::cout << "GetRawBits       " << this << std::endl;
	return value;
}

void	Fixed::setRawBits(int const raw) 
{
	std::cout << "SetRawBits       " << this << std::endl;
	value = raw;
}

Fixed& Fixed::operator = (Fixed &other) 
{
	std::cout << "Opertor =        " << this << std::endl;
	this->value = other.value;
	return *this;
}