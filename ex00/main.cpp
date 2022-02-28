#include "Fixed.hpp"

int main()
{
	Fixed a;
	Fixed b(a);
	b = a;
	Fixed d;
	Fixed c = d;

	a.setRawBits(3);
	std::cout << "a  " << a.getRawBits() << std::endl;
	std::cout << "b  " << b.getRawBits() << std::endl;
	std::cout << "c  " << c.getRawBits() << std::endl;
	std::cout << "d  " << d.getRawBits() << std::endl;
}
