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
		bool operator>(const Fixed& origin) const;
		bool operator<(const Fixed& origin) const;
		bool operator>=(const Fixed& origin) const;
		bool operator<=(const Fixed& origin) const;
		bool operator==(const Fixed& origin) const;
		bool operator!=(const Fixed& origin) const;
		Fixed& operator=(const Fixed& origin);
		Fixed operator+(const Fixed& origin);
		Fixed operator-(const Fixed& origin);
		Fixed operator*(const Fixed& origin);
		Fixed operator/(const Fixed& origin);
		Fixed& operator--();
		Fixed operator--(int);
		Fixed& operator++();
		Fixed operator++(int);
		static Fixed& min(Fixed& a, Fixed& b);
		static const Fixed& min(Fixed const & a, Fixed const & b);
		static Fixed& max(Fixed& a, Fixed& b);
		static const Fixed& max(Fixed const & a, Fixed const & b);
		float toFloat( void ) const;
		int toInt( void ) const;
	private:
		int value;
		static const int nb_bits = 8;
};

std::ostream& operator<<(std::ostream& out, const Fixed& origin);

#endif