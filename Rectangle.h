#pragma once
#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "GeometricObject.h"

class Rectangle :public GeometricObject
{
public:
	Rectangle();
	Rectangle(double width, double height);
	Rectangle(double width, double height, const string& color);
	double getWidth()const;
	void setWidth(double);
	double getHeight() const;
	void setHeight(double);
	string toString() const;

private:
	double width;
	double height;
	
};
#endif