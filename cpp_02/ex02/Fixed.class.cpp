#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed() : fixedInt(0)
{
	std::cout << "Deflault constructor called" << std::endl;
	return ;
}

Fixed::Fixed(int const nb)
{
	std::cout << "Int constructor called" << std::endl;
	fixedInt = nb * power(2, nOfBits);
	return ;
}

Fixed::Fixed(float const nb)
{
	std::cout << "Float constructor called" << std::endl;
	fixedInt = round(nb * power(2, nOfBits));
	return ;
}

Fixed::Fixed(Fixed const & src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
	return ;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

int Fixed::getRawBits() const
{
	return (fixedInt);
}

void Fixed::setRawBits(int const raw)
{
	fixedInt = raw;
	return ;
}

float	Fixed::toFloat(void) const
{
	return (fixedInt / (float)power(2, nOfBits));
}

int		Fixed::toInt(void) const
{
	return (fixedInt >> 8);
}

int		Fixed::power(int nb, int exp) const
{
	int res;
	res = nb;
	while (--exp > 0)
		res = res * nb;
	return (res);
}

//			MIN MAX FUNCTIONS

Fixed & Fixed::min(Fixed & first, Fixed & second)
{
	if (first < second)
		return (first);
	return (second);
}

Fixed const & Fixed::min(Fixed const & first, Fixed const & second)
{
	if (first < second)
		return (first);
	return (second);
}

Fixed & Fixed::max(Fixed & first, Fixed & second)
{
	if (first > second)
		return (first);
	return (second);
}
Fixed const & Fixed::max(Fixed const & first, Fixed const & second)
{
	if (first > second)
		return (first);
	return (second);
}

//			ASSIGNEMENT OPERATOR

Fixed & Fixed::operator=(Fixed const & rhs)
{
	std::cout << "Copy assignement operator called" << std::endl;
	if (this != &rhs)
		this->fixedInt = rhs.getRawBits();
	return (*this);
}

//			IOS OPERATORS

std::ostream & operator<<(std::ostream & output, Fixed const & fixedNb)
{
	output << fixedNb.toFloat();
	return (output);
}

//			COMPARISON OPERATORS

bool Fixed::operator>(Fixed const & rhs) const
{
	if (this->toFloat() > rhs.toFloat())
		return (true);
	return (false);
}

bool Fixed::operator<(Fixed const & rhs) const
{
	return (rhs > *this);
}

bool Fixed::operator==(Fixed const & rhs) const
{
	if (this->toFloat() == rhs.toFloat())
		return (true);
	return (false);
}

bool Fixed::operator>=(Fixed const & rhs) const
{
	return (*this > rhs || *this == rhs);
}

bool Fixed::operator<=(Fixed const & rhs) const
{
	return (*this < rhs || *this == rhs);
}

bool Fixed::operator!=(Fixed const & rhs) const
{
	return (!(*this == rhs));
}

//			MATHS OPERATORS

Fixed const		Fixed::operator+(Fixed const & rhs) const
{
	Fixed tmp;
	tmp.setRawBits(this->getRawBits() + rhs.getRawBits());
	return (tmp);
}

Fixed const		Fixed::operator-(Fixed const & rhs) const
{
	Fixed tmp;
	tmp.setRawBits(this->getRawBits() - rhs.getRawBits());
	return (tmp);
}

Fixed const		Fixed::operator*(Fixed const & rhs) const
{
	Fixed tmp(this->toFloat() * rhs.toFloat());
	return (tmp);
}

Fixed const		Fixed::operator/(Fixed const & rhs) const
{
	Fixed tmp(this->toFloat() / rhs.toFloat());
	return (tmp);
}

//		INCREMENTATION OPERATORS

Fixed & Fixed::operator++(void)
{
	++fixedInt;
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed temp;
	temp.setRawBits(fixedInt++);
	return (temp);
}

Fixed & Fixed::operator--(void)
{
	--fixedInt;
	return (*this);
}

Fixed Fixed::operator--(int)
{
	Fixed temp;
	temp.setRawBits(fixedInt--);
	return (temp);
}