//정주호 251104
#include <iostream> // system built-in <> 먼저사용
#include "circle.h" // user 지정 "" 사용 순서 중요
using namespace std;

int main() 
{
	Circle oDonut; // Datatype , 첫글자 대문자 => Class // objDonut oDount
	
	oDonut.iRadius = 1; //integer type member 변수
	double dArea = oDonut.getArea(); // double type member function
	cout << "donut 면적은 " << dArea << endl;

	Circle oPizza;
	oPizza.iRadius = 30;
	dArea = oPizza.getArea();
	cout << "pizza 면적은 " << dArea << endl;
}