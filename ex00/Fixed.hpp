#ifndef FIXED_HPP
# define FIXED_HPP
#include <iostream>

class Fixed
{
	private:
			int					value;
			static const int	fixed = 8;
	public:
			Fixed();
			Fixed(const Fixed &rhs);
			~Fixed();
			int getRawBits(void)const;
			void setRawBits(int const raw);
			Fixed& operator = (Fixed &other);

};

#endif