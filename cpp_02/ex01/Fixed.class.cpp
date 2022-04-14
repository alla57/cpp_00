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

Fixed & Fixed::operator=(Fixed const & rhs)
{
	std::cout << "Copy assignement operator called" << std::endl;
	if (this != &rhs)
		this->fixedInt = rhs.getRawBits();
	return (*this);
}

std::ostream & operator<<(std::ostream & output, Fixed const & fixedNb)
{
	output << fixedNb.toFloat();
	return (output);
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
