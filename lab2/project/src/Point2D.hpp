// These two lines are the opening part of what's called a "header guard"
// If this file is ever included more than one, it'll make sure that
// only one version of this code will show up to the compiler.
//
// In other words, it won't try to redefine things twice because it
// was included twice.
#include <iostream>
#ifndef POINT2D_HPP
#define POINT2D_HPP
using namespace std;

class Point2D {
	

	public:

		//Default Constructor

		Point2D();


		//Overloaded Constructor

		Point2D(float x, float y);


		//Member functions

		//Getters

		float get_x(void);
		float get_y(void);

		//Setters

		void set_x(float f);
		void set_y(float f);
		//Operator Overloading

		Point2D operator+(const Point2D &A);
		Point2D operator-(const Point2D	&A);
		Point2D operator*(const Point2D &A);
		Point2D operator/(const Point2D &A); 

	private:
		float xax;
		float yax; 
};

#endif // POINT2D_HPP
