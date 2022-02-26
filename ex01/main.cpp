#include "Fixed.hpp"

int main (void) 
{
	//int value = 0b10000000000000000000000000000000;
	Fixed a;
	Fixed const b( -10 );
	Fixed const c( 42.25f );
	Fixed const d( 0.625f );

	//std::cout << "value is " << value << std::endl;
	std::cout << "a is " << a << std::endl;
	std::cout << "b is " << b << std::endl;
	std::cout << "c is " << c << std::endl;
	std::cout << "d is " << d << std::endl;
	std::cout << "a is " << a.toInt() << " as integer" << std::endl;
	std::cout << "a is " << a.getRawBits() << " as Raw" << std::endl;
	std::cout << "b is " << b.toInt() << " as integer" << std::endl;
	std::cout << "c is " << c.toInt() << " as integer" << std::endl;
	std::cout << "d is " << d.toInt() << " as integer" << std::endl;
}