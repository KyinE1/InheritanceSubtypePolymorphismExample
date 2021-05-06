/*
	rectangle.cpp
	Date Written: 4/22
	Created by Kyin Edwards
*/

#include "rectangle.h"

/* 
	Constructor
	@param color The rectangle's color.
	@param height The rectangle's height.
	@param width The rectangle's width.
*/
rectangle::rectangle(const std::string& color, int height, int width) : shape(color), height(height), width(width) {
	// this->height = height in list
	// this->width = width in list
	// shape(color) passed to the shape function (shape.h)
}

/* Overloaded print method to call base class print method. */
void rectangle::print() const {
	shape::print();
	std::cout << " rectangle, height " << height << ", width " << width << ", area " << get_area() << "\n";
}

/* @return Overloaded get_area method to compute shape's area. */
double rectangle::get_area() const {
	return height * width;
} 