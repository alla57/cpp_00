#include "./Point.hpp"

Point::Point(void) : x(0), y(0)
{
	std::cout << "Point default constructor called" << std::endl;
	return ;
}

Point::Point(Point const & rhs)
{
	std::cout << "Point copy constructor called" << std::endl;
	*this = rhs;
	return ;
}

Point::Point(float x, float y) : x(x), x(y)
{
	std::cout << "Point float constructor called" << std::endl;
	return ;
}

Point::~Point()
{
	std::cout << "Point Default constructor called" << std::endl;
	return ;
}

Point & Point::operator=(Point const & rhs)
{
	std::cout << "Point Assignement operator called" << std::endl;
	if (*this != rhs)
	{
		this->x = rhs.getX();
		this->y = rhs.getY();
	}
	return (*this);
}

Fixed	Point::getX(void)
{
	return (this->x);
}

Fixed	Point::getY(void)
{
	return (this->y);
}