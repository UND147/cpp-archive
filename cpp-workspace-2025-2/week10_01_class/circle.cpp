// Class ±¸ÇöºÎ
#include <iostream>
#include "circle.h"
using namespace std;

double Circle::getArea() {
	double dArea;

	dArea = 3.14 * iRadius * iRadius;
	return dArea;
}


//  double getArea(int iRadius) 
//	{
//	double dArea;
//	dArea = 3.14 * iRadius * iRadius;
//	return dArea;
//	}


//	double Circle::getArea() {
//	return 3.14 * iRadius * iRadius;
//	}