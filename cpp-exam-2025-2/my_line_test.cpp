#include <iostream>
#include "my_point001.h"
#include "my_line001.h"
using namespace std;

MyLine001 createHorizontalLine();
MyLine001 createVerticalLine();
void checkIntersection(MyLine001 oHorizontalLine, MyLine001 oVerticalLine);

int main() 
{
	MyLine001 oHorizontalLine;
	MyLine001 oVerticalLine;
	oHorizontalLine = createHorizontalLine();
	oVerticalLine = createVerticalLine();
	checkIntersection(oHorizontalLine, oVerticalLine);
}

MyLine001 createHorizontalLine() 
{
	int iX1, iY1, iX2, iY2;  
	while (true) 
	{
		cout << "수평선을 만들기 위한 두 점의 좌표를 입력하세요." << endl;
		cout << "첫 번째 점 (x1, y1): ";
		cin >> iX1 >> iY1;
		cout << "두 번째 점 (x2, y2): ";
		cin >> iX2 >> iY2;

		if (iX1 == iX2 && iY1 == iY2) 
		{
			cout << "두 점이 같으므로 선분이 아닙니다. 다시 입력하세요." << endl;
			continue;
		}
		MyPoint001 oPoint1(iX1, iY1);
		MyPoint001 oPoint2(iX2, iY2);
		MyLine001 oHorizontalLine(oPoint1, oPoint2);

		if (oHorizontalLine.isHorizontal()) 
		{
			cout << "수평선이 생성되었습니다." << endl;
			return oHorizontalLine;
		}
		else 
		{
			cout << "수평선이 아닙니다. y좌표를 같게 입력하세요." << endl;
			continue;
		}
	}
}
MyLine001 createVerticalLine() 
{
	int iX1, iY1, iX2, iY2;

	while (true) {
		cout << "수직선을 만들기 위한 두 점의 좌표를 입력하세요." << endl;
		cout << "첫 번째 점 (x1, y1): ";
		cin >> iX1 >> iY1;
		cout << "두 번째 점 (x2, y2): ";
		cin >> iX2 >> iY2;

		if (iX1 == iX2 && iY1 == iY2) 
		{
			cout << "두 점이 같으므로 선분이 아닙니다. 다시 입력하세요." << endl;
			continue;
		}

		MyPoint001 oPoint1(iX1, iY1);
		MyPoint001 oPoint2(iX2, iY2);
		MyLine001 oVerticalLine(oPoint1, oPoint2);

		if (oVerticalLine.isVertical()) 
		{
			cout << "수직선이 생성되었습니다." << endl;
			return oVerticalLine;
		}
		else 
		{
			cout << "수직선이 아닙니다. x좌표를 같게 입력하세요." << endl;
			continue;
		}
	}
}
void checkIntersection(MyLine001 oHorizontalLine, MyLine001 oVerticalLine) 
{
	int iHX1, iHY1, iHX2, iHY2;
	int iVX1, iVY1, iVX2, iVY2;
	int iHorizontalY, iHorizontalXMin, iHorizontalXMax;
	int iVerticalX, iVerticalYMin, iVerticalYMax;
	bool bIntersects = false;
	
	iHX1 = oHorizontalLine.getX1();
	iHY1 = oHorizontalLine.getY1();
	iHX2 = oHorizontalLine.getX2();
	iHY2 = oHorizontalLine.getY2();
	iVX1 = oVerticalLine.getX1();
	iVY1 = oVerticalLine.getY1();
	iVX2 = oVerticalLine.getX2();
	iVY2 = oVerticalLine.getY2();
	iHorizontalY = iHY1;
	
	if (iHX1 < iHX2) 
	{
		iHorizontalXMin = iHX1;
		iHorizontalXMax = iHX2;
	}
	else
	{
		iHorizontalXMin = iHX2;
		iHorizontalXMax = iHX1;
	}
	iVerticalX = iVX1;
	
	if (iVY1 < iVY2) 
	{
		iVerticalYMin = iVY1;
		iVerticalYMax = iVY2;
	}
	else 
	{
		iVerticalYMin = iVY2;
		iVerticalYMax = iVY1;
	}
	if ((iVerticalX >= iHorizontalXMin) && (iVerticalX <= iHorizontalXMax)) 
	{
		if ((iHorizontalY >= iVerticalYMin) && (iHorizontalY <= iVerticalYMax)) 
		{
			bIntersects = true;
		}
	}
	if (bIntersects) 
	{
		cout << oVerticalLine.getCoordinatesP1() << "점과 " << oVerticalLine.getCoordinatesP2() << "점로 된 선분과 "
			 << oHorizontalLine.getCoordinatesP1() << "점과 " << oHorizontalLine.getCoordinatesP2() << "점으로 된 선분은 교차한다." << endl;
	}
	else 
	{
		cout << oVerticalLine.getCoordinatesP1() << "점과 " << oVerticalLine.getCoordinatesP2() << "점로 된 선분과 "
			 << oHorizontalLine.getCoordinatesP1() << "점과 " << oHorizontalLine.getCoordinatesP2() << "점으로 된 선분은 교차하지 않는다." << endl;
	}
}