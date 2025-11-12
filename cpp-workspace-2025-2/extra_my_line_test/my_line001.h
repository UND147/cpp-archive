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
	bool isVertical(); // 수직 Line인지 여부를 판단
	bool isHorizontal(); // 수평 Line인지 여부를 판단
	string getCoordinates(); // 각 점의 좌표를 (#, #) 형식의 문자열로 반환
};
