#include <iostream>

class Shape
{
public:
	// Shape();

	int area = 10;
	int GetArea() { return area; }

	// ~Shape();
	
};


int main()
{
	
	int a;

	std::cout << "start ..." << "\n";

	Shape shape;

	a = shape.GetArea();


	std::cout << a << "\n";

	return 0;
}