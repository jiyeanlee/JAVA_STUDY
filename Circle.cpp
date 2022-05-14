//Circle.cpp
#include "Circle.h"

Circle::Circle() {
	radius = 1;
}

Circle::Circle(double radius) {
	this->radius = radius;
}

Circle::Circle(double radius,const string& color) :GeometricObject(color) {
	this->radius = radius;
	
}

double Circle::getRadius() const {
	return radius;
}

void Circle::setRadius(double radius) {
	this->radius = (radius >= 0) ? radius : 0;
}

string Circle::toString() const {
	return "Circle object";
}