/*
	triangle.cpp
	Date Written: 4/22
	Created by Kyin Edwards
*/

#include "triangle.h"

/* 
	Constructor
	@param color The triangle's color.
	@param height The triangle's height.
	@param base The triangle's base.
*/
triangle::triangle(const std::string& color, int height, int base) : shape(color), height(height), base(base) {
	// this->height = height in list
	// this->base = base in list
	// shape(color) passed to the shape function (shape.h)
}

/* @return Overloaded print method to call base class print method. */
void triangle::print() const {
	shape::print();
	std::cout << " triangle, height " << height << ", base " << base << ", area " << get_area() << "\n";
}

/* @return Overloaded get_area method to compute shape's area. */
double triangle::get_area() const {
	return (.5) * height * base;
} 