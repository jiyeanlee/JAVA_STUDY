
#include "GeometricObject.h"
#include "Circle.h"
#include "Rectangle.h"

#include <iostream>
using namespace std;

int main() {

	GeometricObject shape;
	cout << shape.toString() << endl
		<< "color:" << shape.getColor() << endl << endl;
		

	Circle circle(5);
	circle.setColor("black");
	cout << circle.toString() << endl
		<< "color:" << circle.getColor() << endl
		<< "radius:" << circle.getRadius() << endl << endl;

	//Circle°´Ã¼ 2°³
	Circle c1;
	Circle c2(5,"blue");
	cout << c1.toString() << endl
		<< "color:" << c1.getColor() << endl
		<< "radius:" << c1.getRadius() << endl << endl;
	cout << c2.toString() << endl
		<< "color:" << c2.getColor() << endl
		<< "radius:" << c2.getRadius() << endl << endl;


	//rectangle °´Ã¼ 2°³
	Rectangle r1;
	Rectangle r2(10,5);
	cout << r1.toString() << endl
		<< "color:" << r1.getColor() << endl
		<< "width:" << r1.getWidth() << endl
		<< "height:" << r1.getHeight() << endl << endl;
	cout << r2.toString() << endl
		<< "color:" << r2.getColor() << endl
		<< "width:" << r2.getWidth() << endl
		<< "height:" << r2.getHeight() << endl << endl;

	Rectangle rectangle(2, 3, "orange");
	cout << rectangle.toString() << endl
		<< "color:" << rectangle.getColor() << endl
		<< "width:" << rectangle.getWidth() << endl
		<< "height:" << rectangle.getHeight() << endl << endl;

	return 0;

}

