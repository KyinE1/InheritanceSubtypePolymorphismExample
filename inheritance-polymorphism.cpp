/*
	inheritance-polymorphism.cpp
	Date Written: 4/22
	Created by: Kyin Edwards
*/

#include <iomanip>
#include <vector>
#include "shape.h"
#include "circle.h"
#include "rectangle.h"
#include "triangle.h"

/* Driver program for shape class hierarchy */
int main() {
	
	// std::cout << std::fixed << std::setprecision(2);
	
	// create vector shapes
	std::vector<shape*> shapes;
	
	// initialize vector with shapes (objects)
	shapes.push_back(new circle("Red", 360.00));
	shapes.push_back(new circle("Orange", 180.00));
	shapes.push_back(new rectangle("Green", 48.00, 36.00));
	shapes.push_back(new rectangle("Yellow", 72.00, 64.00));
	shapes.push_back(new triangle("Blue", 60.00, 90.00));
	shapes.push_back(new triangle("Purple", 45.00, 45.00));
	
	std::cout << "\nPrinting all shapes... \n\n";
	
	for (size_t i = 0; i < shapes.size(); i++)
		shapes[i]->print();
	
	std::cout << "\nPrinting only circles... \n\n";
	
	for (size_t i = 0; i < shapes.size(); i++) {
		// attempt to downcast, if so its a circle
		shape* obj = dynamic_cast<circle*>(shapes[i]);
		if (obj != nullptr)
			shapes[i]->print();
	}
	
	std::cout << "\n";
	
	// empty memory stored in vector
	for (size_t i = 0; i < shapes.size(); i++)
		shapes.pop_back();
	
	return 0;
}