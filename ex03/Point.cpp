#include "Point.hpp"

Point::Point():x(0), y(0)
{

}

Point::~Point()
{

}



Point::Point(const Point& origin): x(origin.getX()), y(origin.getY())
{

}

Point::Point(float const newx, float const newy):x(newx), y(newy)
{

}

Fixed const Point::getX() const
{
	return (this->x);
}

Fixed const Point::getY() const
{
	return (this->y);
}

Point& Point::operator=(const Point&)
{
	return (*this);
}
