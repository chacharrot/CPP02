#include "Fixed.hpp"

int main()
{
	Fixed a;
	Fixed b(a); // 복사생성자
	b = a; // 복사 대입 연산자
	Fixed d;
	Fixed c = d; //복사생성자

	std::cout << "a  " << a.getRawBits() << std::endl;
	std::cout << "b  " << b.getRawBits() << std::endl;
	std::cout << "c  " << c.getRawBits() << std::endl;
	std::cout << "d  " << d.getRawBits() << std::endl;
}