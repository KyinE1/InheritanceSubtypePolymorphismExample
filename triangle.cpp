#include "triangle.h"

/** Constructor.
 *	@param color: The triangle's color.
 *	@param height: The triangle's height.
 *	@param base: The triangle's base.
 */
triangle::triangle(const std::string& color, int height, int base) : shape(color), height(height), base(base) {
	// this->height = height in list
	// this->base = base in list
	// shape(color) passed to the shape function (shape.h)
}

/** Overloaded print method to call base class method. */
void triangle::print() const {
	shape::print();
	std::cout << " triangle, height " << height << ", base " << base << ", area " << get_area() << "\n";
}

/** Accessor method. */
double triangle::get_area() const {
	return (.5) * height * base;
} 
