#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
	public:
		Fixed();
		Fixed(const Fixed& origin);
		~Fixed();
		int getRawBits( void ) const;
		void setRawBits( int const raw);
		Fixed& operator=(const Fixed& origin);
	private:
		int value;
		static const int nb_bits = 8;
};

#endif