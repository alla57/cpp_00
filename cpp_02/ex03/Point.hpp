#ifndef POINT_HPP
# define POINT_HPP

# include "./Fixed.hpp"

class Point
{
public:
	Point(void);
	Point(Point const & src);
	Point(float x, float y);
	~Point();

	Point & operator=(Point const & rhs);

	Fixed	getX(void) const;
	Fixed	getY(void) const;
private:
	Fixed const x;
	Fixed const y;
};

#endif