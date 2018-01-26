#include "Person.hpp"
#include <iostream>

Person::Person() {
	name = "";
	Point2D location();
}

Person::Person(std::string name, float f1, float f2){
	this->name = name;  
	Point2D location(f1,f2);

}
string Person::get_name(){
	return name;
}
	
Point2D Person::get_location(){
	return location;
}
void Person::set_name(string name){
	this->name = name;
}
void Person::set_location(Point2D A){
	location = A;
} 
