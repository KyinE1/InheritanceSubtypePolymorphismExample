#include <iomanip>
#include <vector>
#include "shape.h"
#include "circle.h"
#include "rectangle.h"
#include "triangle.h"

/** Driver code for shape class hierarchy. */
int main() {
	std::vector<shape*> shapes;

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
	
	for (size_t i = 0; i < shapes.size(); i++)
		shapes.pop_back();
	
	return 0;
}
