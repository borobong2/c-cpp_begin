#include <iostream>
#include "shape.h"
#include "rectangle.h"
#include "circle.h"

void printArea(const Shape *ps)
{
	std::cout << "area :" << ps->area() << std::endl;
}

int main()
{
	//Shape s;
	
	Shape* shapes[5];
	shapes[0] = new Rectangle(50, 50, 100, 50);
	shapes[1] = new Rectangle(50, 100, 10, 30);
	shapes[2] = new Circle(50, 50, 3);
	shapes[3] = new Rectangle(100, 200, 50, 10);
	shapes[4] = new Circle(100, 100, 10);

	for (int i = 0; i < 5; ++i)
		printArea(shapes[i]);
		
	for(int i = 0; i < 5; ++i)
		delete shapes[i];
		
	return 0;
}
