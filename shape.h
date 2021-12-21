#ifndef SHAPE_H
#define SHAPE_H

#include <iostream>
#include <string>

class shape {
private: 
	std::string color;
public:
	shape(const std::string&);
	virtual ~shape(){} 
	virtual void print() const;
	virtual double get_area() const = 0; 
};

#endif
