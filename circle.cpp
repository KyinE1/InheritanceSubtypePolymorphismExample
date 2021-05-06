/*
	circle.cpp
	Date Written: 4/22
	Created by: Kyin Edwards
*/

#include "circle.h"

/* 
	Constructor
	@param color The circle's color.
	@param radius The distance from the center.
*/
circle::circle(const std::string& color, int radius) : shape(color), radius(radius) {
	// this->color = color in list
	// this->radius = radius in list
}

/* Overloaded print method to call base class print method. */
void circle::print() const {
	shape::print(); // Call to base method (shape.h)
	std::cout << " circle, radius " << radius << ", area " << get_area() << "\n"; 
}

/* @return Overloaded get_area method to compute shape's area. */
double circle::get_area() const {
	return M_PI * radius * radius;
}