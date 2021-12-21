#ifndef RECTANGLE_H
#define RECTANGLE_H

#include <iostream>
#include <string>
#include "shape.h"

class rectangle : public shape {
private:
	int height;
	int width;
public:
	rectangle(const std::string&, int, int);
	virtual ~rectangle(){}
	void print() const;
	double get_area() const;
};

#endif
