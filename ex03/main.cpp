#include "Point.hpp"

int main( void ) 
{
	Point const a(0, 0);
	Point  const b(5, 0);
	Point  const c(0, 5);
	Point const point(5, 5);
	std::cout << "a.x: " << a.getX() << std::endl;
	std::cout << "a.y: " << a.getY() << std::endl;
	std::cout << "b.x: " << b.getX() << std::endl;
	std::cout << "b.y: " << b.getY() << std::endl;
	std::cout << "c.x: " << c.getX() << std::endl;
	std::cout << "c.y: " << c.getY() << std::endl;
	std::cout << "point.x: " << point.getX() << std::endl;
	std::cout << "point.y: " << point.getY() << std::endl;
	if (bsp(a, b, c, point))
		std::cout << "Point is in triangle!" << std::endl;
	else		
		std::cout << "No!" << std::endl;
	return 0; 
}