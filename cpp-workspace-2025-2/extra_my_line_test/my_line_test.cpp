#include <iostream>
#include "my_point001.h"
#include "my_line001.h"
using namespace std;

MyLine001 createHorizontalLine();
MyLine001 createVerticalLine();
void checkIntersection(MyLine001 oHLine, MyLine001 oVLine);

int main() {
	//-2개의 MyLine 클래스 객체를 갖고 있다. (1개는 수평라인, 1개는 수직라인)
	MyLine001 oHorizontal;
	MyLine001 oVertical;
	//	- ①번 함수를 호출하여 수평라인의 MyLine 객체를 생성한다.
	oHorizontal = createHorizontalLine();
	//	- ②번 함수를 호출하여 수직라인의 MyLine 객체를 생성한다.
	oVertical = createVerticalLine();
	//	- ③번 함수를 호출하여 수평라인과 수직 라인의 교차 여부를 출력한다.
	checkIntersection(oHorizontal, oVertical);
	//	이때, 출력 내용은 다음과 같이 구성한다.
	//	(x1, y1)점과(x1, y2)점로 된 선분과(x2, y3)점과(x3, y3)점으로 된 선분은 교차한다.
	//	(x1, y1)점과(x1, y2)점로 된 선분과(x2, y3)점과(x3, y3)점으로 된 선분은 교차하지 않는다.

}
//생성할 함수 :
//① 2개의 MyPoint 객체의 정보를 입력받아 수평 Line의 MyLine 객체를 생성하여 MyLine 객체를 반환하는 함수
MyLine001 createHorizontalLine() {
	int iX1;
	int iY1;
	int iX2;
	int iY2;

	while (true) {
		cout << "수평선을 만들기 위한 두 점의 좌표를 입력하세요." << endl;
		cout << "첫 번째 점 (x1, y1): ";
		cin >> iX1 >> iY1;
		cout << "두 번째 점 (x2, y2): ";
		cin >> iX2 >> iY2;

		MyPoint001 oPoint1(iX1, iY1);
		MyPoint001 oPoint2(iX2, iY2);
		MyLine001 oLine(oPoint1, oPoint2);

		// 수평선인지 확인 (y좌표가 같아야 함)
		if (oLine.isHorizontal()) {
			cout << "수평선이 생성되었습니다." << endl;
			return oLine;
		}
		//만약, 사용자가 입력한 값으로 생성되는 객체가 수평 Line이 아니면 다시 입력 받는다.
		else {
			cout << "수평선이 아닙니다. 다시 입력하세요. (y좌표를 같게 입력하세요)" << endl;
		}
	}
}
//② 2개의 MyPoint 객체의 정보를 입력받아 수직 Line의 MyLine 객체를 생성하여 MyLine 객체를 반환하는 함수
MyLine001 createVerticalLine() {
	int iX1;
	int iY1;
	int iX2;
	int iY2;

	while (true) {
		cout << "수직선을 만들기 위한 두 점의 좌표를 입력하세요." << endl;
		cout << "첫 번째 점 (x1, y1): ";
		cin >> iX1 >> iY1;
		cout << "두 번째 점 (x2, y2): ";
		cin >> iX2 >> iY2;

		MyPoint001 oPoint1(iX1, iY1);
		MyPoint001 oPoint2(iX2, iY2);
		MyLine001 oLine(oPoint1, oPoint2);

		// 수직선인지 확인 (x좌표가 같아야 함)
		if (oLine.isVertical()) {
			cout << "수직선이 생성되었습니다." << endl;
			return oLine;
		}
		//만약, 사용자가 입력한 값으로 생성되는 객체가 수직 Line이 아니면 다시 입력 받는다.
		else {
			cout << "수직선이 아닙니다. 다시 입력하세요. (x좌표를 같게 입력하세요)" << endl;
		}
	}
}
//③ 수평라인과 수직라인을 매개값으로 받아 두 MyLine 객체가 서로 교차 여부를 판단하는 함수
void checkIntersection(MyLine001 oHLine, MyLine001 oVLine) {
	bool bIntersects = true; 
	//	이때, 출력 내용은 다음과 같이 구성한다.
	//	(x1, y1)점과(x1, y2)점로 된 선분과(x2, y3)점과(x3, y3)점으로 된 선분은 교차한다.
	//	(x1, y1)점과(x1, y2)점로 된 선분과(x2, y3)점과(x3, y3)점으로 된 선분은 교차하지 않는다.
	if (bIntersects) {
		cout << oHLine.getCoordinates() << "점로 된 선분과 "
			<< oVLine.getCoordinates() << "점으로 된 선분은 교차한다." << endl;
	}
	else {
		cout << oHLine.getCoordinates() << "점로 된 선분과 "
			<< oVLine.getCoordinates() << "점으로 된 선분은 교차하지 않는다." << endl;
	}
}