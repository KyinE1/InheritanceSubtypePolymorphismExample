/*
	circle.h
	Date Written: 4/22
	Created by: Kyin Edwards
*/

#ifndef CIRCLE_H
#define CIRCLE_H

#include <iostream>
#include <string>
#include <math.h>
#include "shape.h"

class circle : public shape {
	private:
		int radius;
	public:
		circle(const std::string&, int);
		virtual ~circle(){}
		void print() const;
		double get_area() const;
};

#endif