/*
	shape.cpp
	Date Written: 4/22
	Created by: Kyin Edwards
*/

#include "shape.h"

/* 
	Constructor 
	@param color The shape's color.
*/
shape::shape(const std::string& color) : color(color) {
	// this->color = color would be the equivalent in the list
}

/* Print the color of the shape. */
void shape::print() const {
	std::cout << color; 
}