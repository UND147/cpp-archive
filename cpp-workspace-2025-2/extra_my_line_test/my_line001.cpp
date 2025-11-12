#include "my_line001.h"

MyLine001::MyLine001() {
}
MyLine001::MyLine001(MyPoint001 point1, MyPoint001 point2) {
	this->point1 = point1;
	this->point2 = point2;
}
bool MyLine001::isVertical() {
	return point1.getX() == point2.getX();
}
bool MyLine001::isHorizontal() {
	return point1.getY() == point2.getY();
}
string MyLine001::getCoordinates() {
	string result = "";

	// point1: (x1, y1)
	result += "(";
	result += std::to_string(point1.getX());
	result += ", ";
	result += std::to_string(point1.getY());
	result += ") ";

	// point2: (x2, y2)
	result += "(";
	result += std::to_string(point2.getX());
	result += ", ";
	result += std::to_string(point2.getY());
	result += ")";

	return result;
}
