#include "rectangle.h"

/** Constructor.
 *	@param color: The rectangle's color.
 *	@param height: The rectangle's height.
 *	@param width: The rectangle's width.
 */
rectangle::rectangle(const std::string& color, int height, int width) : shape(color), height(height), width(width) {
	// this->height = height in list
	// this->width = width in list
	// shape(color) passed to the shape function (shape.h)
}

/** Overloaded print method to call base class method. */
void rectangle::print() const {
	shape::print();
	std::cout << " rectangle, height " << height << ", width " << width << ", area " << get_area() << "\n";
}

/** Accessor method. */
double rectangle::get_area() const {
	return height * width;
} 
