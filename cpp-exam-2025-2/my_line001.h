#pragma once
#include <string>
#include "my_point001.h"
using namespace std;
class MyLine001
{
private:
	MyPoint001 point1;
	MyPoint001 point2;
public:
	MyLine001();
	MyLine001(MyPoint001 point1, MyPoint001 point2);

	bool isVertical();
	bool isHorizontal();

	string getCoordinatesP1();
	string getCoordinatesP2();

	int getX1();
	int getY1();
	int getX2();
	int getY2();
};