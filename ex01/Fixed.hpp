#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
	public:
		Fixed();
		Fixed(const Fixed& origin);
		Fixed(int const param);
		Fixed(float const param);
		~Fixed();
		int getRawBits( void ) const;
		void setRawBits( int const raw);
		Fixed& operator=(const Fixed& origin);
		float toFloat( void ) const;
		int toInt( void ) const;
	private:
		int value;
		static const int nb_bits = 8;
};

std::ostream& operator<<(std::ostream& out, const Fixed& origin);

#endif