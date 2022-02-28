#include "Fixed.hpp"

int main ( void ) {
Fixed a(0);
Fixed b(10.25f);

std::cout << "default a : " << a << std::endl;
std::cout << "전위 연산 : " << ++a << std::endl;
std::cout << "전위 이후 : " << a << std::endl;
std::cout << "후위 연산 : " << a++ << " " << std::endl;
std::cout << "후위 이후 : " << a << std::endl;
std::cout << "default b : " << b << std::endl;
a = Fixed(3);
std::cout << "max 사용  : " << Fixed::max(a, b) << std::endl;
std::cout << "min 사용  : " << Fixed::min(a, b) << std::endl;
std::cout << "+ 연산    : " << a + b << " " << std::endl;
std::cout << "- 연산    : " << a - b << " " << std::endl;
std::cout << "* 연산    : " << a * b << " " << std::endl;
std::cout << "/ 연산    : " << a / b << " " << std::endl;
std::cout << "= 연산 a =: " << (a = b) << std::endl;

return 0;
}