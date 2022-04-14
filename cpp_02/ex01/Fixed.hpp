#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>

class Fixed
{
public:
	Fixed(void);
	Fixed(int const nb);
	Fixed(float const nb);
	Fixed(Fixed const & src);
	~Fixed(void);

	Fixed & operator=(Fixed const & rhs);

	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	float	toFloat(void) const;
	int		toInt(void) const;

private:
	int					fixedInt;
	static int const	nOfBits = 8;
	int					power(int nb, int exp) const;
};

std::ostream & operator<<(std::ostream & output, Fixed const & fixedNb);

#endif