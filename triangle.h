#ifndef TRIANGLE_H
#define TRIANGLE_H

#include <iostream>
#include <string>
#include "shape.h"

class triangle : public shape {
private:
	int height;
	int base;
public:
	triangle(const std::string&, int, int);
	virtual ~triangle(){}
	void print() const;
	double get_area() const;
};

#endif
