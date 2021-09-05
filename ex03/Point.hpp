#ifndef POINT_HPP
#define POINT_HPP

#include <iostream>
#include <cmath>
#include "Fixed.hpp"

class Point
{
	public:
		Point();
		~Point();
		Point(const Point& origin);
		Point(const float x, const float y);
		Point& operator=(const Point&);
		Fixed const getX() const;
		Fixed const getY() const;
	private:
		Fixed const x;
		Fixed const y;
};

bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif