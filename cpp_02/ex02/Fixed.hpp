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
	bool operator>(Fixed const & rhs) const;
	bool operator<(Fixed const & rhs) const;
	bool operator>=(Fixed const & rhs) const;
	bool operator<=(Fixed const & rhs) const;
	bool operator==(Fixed const & rhs) const;
	bool operator!=(Fixed const & rhs) const;

	Fixed const operator+(Fixed const & rhs) const;
	Fixed const operator-(Fixed const & rhs) const;
	Fixed const operator*(Fixed const & rhs) const;
	Fixed const operator/(Fixed const & rhs) const;

	Fixed & operator++(void);
	Fixed operator++(int);
	Fixed & operator--(void);
	Fixed operator--(int);

	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	float	toFloat(void) const;
	int		toInt(void) const;

	static Fixed & min(Fixed & first, Fixed & second);
	static Fixed const & min(Fixed const & first, Fixed const & second);
	static Fixed & max(Fixed & first, Fixed & second);
	static Fixed const & max(Fixed const & first, Fixed const & second);

private:
	int					fixedInt;
	static int const	nOfBits = 8;
	int					power(int nb, int exp) const;
};

std::ostream & operator<<(std::ostream & output, Fixed const & fixedNb);

#endif