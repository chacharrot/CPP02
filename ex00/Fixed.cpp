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

int		Fixed::getRawBits(void) const 
{
	return this->value;
}

void	Fixed::setRawBits(int const raw) 
{
	this->value = raw;
}

Fixed&	Fixed::operator = (Fixed &other) 
{
	this->value = other.value;
	return *this;
}
