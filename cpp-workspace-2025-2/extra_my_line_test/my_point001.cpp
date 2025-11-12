#include "my_point001.h"


MyPoint001::MyPoint001() {
	iX = 0;
	iY = 0;
}
MyPoint001::MyPoint001(int iX, int iY) {
	this->iX = iX;
	this->iY = iY;
}
int MyPoint001::getX() {
	return iX;
}
int MyPoint001::getY() {
	return iY;
}
	