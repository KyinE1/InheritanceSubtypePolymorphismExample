#
# PROGRAM: 		inheritance-polymorphism
# PROGRAMMER: 	Kyin Edwards
# DATE WRITTEN: 4/22/2021
#

# Compiler variables
CXX = g++
CXXFLAGS = -Wall -Werror -std=c++11

# Rule to link object code files to create executable file
all: inheritance-polymorphism
inheritance-polymorphism: inheritance-polymorphism.o shape.o circle.o rectangle.o triangle.o
		$(CXX) $(CXXFLAGS) -o inheritance-polymorphism $^

# Rules to compile source code file to object code
# Each class should be in its own .o file
inheritance-polymorphism.o: inheritance-polymorphism.cpp
shape.o: shape.cpp shape.h
circle.o: circle.cpp circle.h
rectangle.o: rectangle.cpp rectangle.h
triangle.o: triangle.cpp triangle.h

# Pseudo-target to remove object code and executable files
clean:
		rm -f inheritance-polymorphism *.o