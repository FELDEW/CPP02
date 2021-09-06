#include "Fixed.hpp"

Fixed::Fixed()
{
	this->value = 0;
}

Fixed::Fixed(int const param)
{
	this->value = param << this->nb_bits;
}

Fixed::Fixed(float const param)
{
	this->value = (int)(roundf)(param * (1 << this->nb_bits));
}

Fixed::~Fixed()
{

}

Fixed::Fixed(const Fixed& origin)
{
	*this = origin;	
}

int Fixed::getRawBits( void ) const
{
	return (this->value);
}

void Fixed::setRawBits( int const raw )
{
	this->value = raw;
}

Fixed& Fixed::operator=(const Fixed& origin)
{
	if (this == &origin)
		return (*this);
	value = origin.getRawBits();
	return (*this);
}

bool Fixed::operator>(const Fixed& origin) const
{
	return (this->value > origin.getRawBits());
}

bool Fixed::operator<(const Fixed& origin) const
{
	return (this->value < origin.getRawBits());
}

bool Fixed::operator>=(const Fixed& origin) const
{
	return (this->value >= origin.getRawBits());
}

bool Fixed::operator<=(const Fixed& origin) const
{
	return (this->value <= origin.getRawBits());
}

bool Fixed::operator==(const Fixed& origin) const
{
	return (this->value == origin.getRawBits());
}

bool Fixed::operator!=(const Fixed& origin) const
{
	return (this->value != origin.getRawBits());
}

Fixed Fixed::operator+(const Fixed& origin) const
{
	Fixed temp = *this;
	temp.setRawBits(this->value + origin.getRawBits());
	return(temp);
}

Fixed Fixed::operator-(const Fixed& origin) const
{
	Fixed temp = *this;
	temp.setRawBits(this->value - origin.getRawBits());
	return(temp);
}

Fixed Fixed::operator*(const Fixed& origin) const
{
	Fixed temp = *this;
	temp.setRawBits((this->value * origin.getRawBits()) >> this->nb_bits);
	return(temp);
}

Fixed Fixed::operator/(const Fixed& origin) const
{
	Fixed temp = *this;
	temp.setRawBits((this->value << this->nb_bits) / origin.getRawBits());
	return(temp);
}

Fixed Fixed::operator--(int)
{
	Fixed temp;
	temp.setRawBits(this->value--);
	return(temp);
}

Fixed& Fixed::operator--()
{
	this->value--;
	return(*this);
}

Fixed Fixed::operator++(int)
{
	Fixed temp;
	temp.setRawBits(this->value++);
	return(temp);
}

Fixed& Fixed::operator++()
{
	this->value++;
	return(*this);
}

Fixed& Fixed::min(Fixed& a, Fixed& b)
{
	if (a <= b)
		return(a);
	return (b);
}

Fixed& Fixed::max(Fixed& a, Fixed& b)
{
	if (a >= b)
		return(a);
	return (b);
}

const Fixed& Fixed::min(Fixed const & a, Fixed const & b)
{
	if (a <= b)
		return(a);
	return (b);
}

const Fixed& Fixed::max(Fixed const & a, Fixed const & b)
{
	if (a >= b)
		return(a);
	return (b);
}

std::ostream& operator<<(std::ostream &out, const Fixed& origin)
{
	out << origin.toFloat();
	return (out);
}

float Fixed::toFloat( void ) const
{
	return((float)this->value / (1 << this->nb_bits));
}

int Fixed::toInt( void ) const
{
	return(this->value >> this->nb_bits);
}