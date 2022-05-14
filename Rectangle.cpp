//Rectangle.cpp
#include "Rectangle.h"

Rectangle::Rectangle() {
	width = 1;
	height = 1;
}

Rectangle::Rectangle(double width, double height)
{
	this->width = width;
	this->height = height;
}

Rectangle::Rectangle(double width,double height,const string& color):GeometricObject(color) {
	this->width = width;
	this->height = height;


}

double Rectangle::getWidth() const { 
	return width;
}
void Rectangle::setWidth(double width) {
	this->width = (width >= 0) ? width : 0;
}

double Rectangle::getHeight() const {
	return height;
}
void Rectangle::setHeight(double height) {
	this->height = (height >= 0) ? height : 0;
}
string Rectangle::toString() const { return  "Rectangle object"; }