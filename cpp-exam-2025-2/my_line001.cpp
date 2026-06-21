#include "my_line001.h"

MyLine001::MyLine001() 
{
	point1 = MyPoint001();
	point2 = MyPoint001();
}
MyLine001::MyLine001(MyPoint001 point1, MyPoint001 point2) 
{
	this->point1 = point1;
	this->point2 = point2;
}
bool MyLine001::isVertical() 
{
	return point1.getX() == point2.getX(); 
}
bool MyLine001::isHorizontal() 
{
	return point1.getY() == point2.getY();
}
string MyLine001::getCoordinatesP1() 
{
	string coordinates;

	coordinates = coordinates + "(";
	coordinates = coordinates + to_string(point1.getX());
	coordinates = coordinates + ", ";
	coordinates = coordinates + to_string(point1.getY());
	coordinates = coordinates + ") ";
	
	return coordinates;
}
string MyLine001::getCoordinatesP2() 
{
	string coordinates;

	coordinates = coordinates + "(";
	coordinates = coordinates + to_string(point2.getX());
	coordinates = coordinates + ", ";
	coordinates = coordinates + to_string(point2.getY());
	coordinates = coordinates + ")";

	return coordinates;
}
int MyLine001::getX1() 
{
	return point1.getX();
}
int MyLine001::getY1() 
{
	return point1.getY();
}
int MyLine001::getX2() 
{
	return point2.getX();
}
int MyLine001::getY2() 
{
	return point2.getY();
}