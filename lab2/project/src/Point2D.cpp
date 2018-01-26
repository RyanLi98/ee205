#include "Point2D.hpp"
//#include <iostream>

Point2D::Point2D(){

	 xax = 0;
	 yax = 0;
}

Point2D::Point2D(float x, float y){
	xax = x;
	yax = y;
}

float Point2D::get_x(void){
	return xax;
}

float Point2D::get_y(void){
	return yax;
}

void Point2D::set_x(float f){
	xax = f;
}

void Point2D::set_y(float f){
	yax = f;
}


Point2D Point2D::operator+(const Point2D &A){
	Point2D temp_Point;
	temp_Point.xax = xax + A.xax;
	temp_Point.yax = yax + A.yax;
	return temp_Point;
}
Point2D Point2D::operator-(const Point2D &A){
	Point2D temp_Point;
	temp_Point.xax = xax - A.xax;
	temp_Point.yax = yax - A.yax;
	return temp_Point;
}
Point2D Point2D::operator*(const Point2D &A){
	Point2D temp_Point;
	temp_Point.xax = xax * A.xax;
	temp_Point.yax = yax * A.yax;
	return temp_Point;
}
Point2D Point2D::operator/(const Point2D &A){
	Point2D temp_Point;
	temp_Point.xax = xax / A.xax;
	temp_Point.yax = yax / A.yax;
	return temp_Point;
}


