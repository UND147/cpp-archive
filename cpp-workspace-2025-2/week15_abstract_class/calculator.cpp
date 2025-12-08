#include <iostream>
#include "calculator.h"
using namespace std;
void Calculator::input() {
	cout << "정수 2개를 입력하세요>> ";
	cin >> iNo1 >> iNo2;
}
void Calculator::run() {
	input();
	cout << "계산된 값은 " << calc(iNo1, iNo2) << endl;
}