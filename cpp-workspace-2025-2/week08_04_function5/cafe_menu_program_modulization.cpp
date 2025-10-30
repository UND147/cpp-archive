// 정주호 ** 수업X
#include <iostream>
#include <string>
using namespace std;
#define ARRSIZE 4
void prnResult(int sumP, string* menuName, int* iCount);
void processCafe(string* menuName, int* iCount, int* sumP);
int main() {

	//int menu1P = 1000, menu2P = 1500, menu3P = 2000, menu4P = 2500;
	int sumP = 0;
	int* pSumP = &sumP;
	int iCount[ARRSIZE] = { 0 };
	int* piCount = iCount;
	string menuName[ARRSIZE] = { "에스프레소", "아메리카노", "카페라떼", "아이스티" };
	string* pmenuName = menuName;

	processCafe(pmenuName, piCount, pSumP);

	prnResult(sumP, pmenuName, piCount);
}
void prnResult(int sumP, string* menuName, int* iCount)
{
	cout << "총 판매 금액" << '\t' << ":" << sumP << "원" << endl;
	for (int k = 0; k < ARRSIZE; ++k)
	{
		cout << "총 판매된 " << *(menuName + k) << "의 잔 수는" << '\t' << ":" << *(iCount + k) << "잔" << endl;
	}
}
void processCafe(string* menuName, int* iCount, int* sumP)
{
	int inMenu, iMenuitem, iMenuLstNo;
	int inAmount;
	int iPrice[ARRSIZE] = { 1000, 1500, 2000, 2500 };
	int wholePrice[ARRSIZE];
	while (true)
	{
		cout << "==============나의 작은 카페 메뉴==============" << endl;
		cout << "0.주문종료" << endl;
		for (int i = 0; i < ARRSIZE; ++i) {
			iMenuLstNo = i + 1;
			cout << iMenuLstNo << "." << *(menuName + i) << '\t' << ":" << iPrice[i] << "원" << endl;
		}
		cout << "================================================" << endl;
		cout << "→ 주문메뉴 선택" << '\t' << ":";
		cin >> inMenu; //0이 입력될때까지 판매 금액을 입력한다, 0이 입력되면 중단

		if (inMenu == 0) {
			cout << "주문이 종료되었습니다" << endl << endl;
			break;
		}


		if (inMenu > 0 && inMenu <= ARRSIZE) {
			cout << "→ 잔 수 입력" << '\t' << ":";
			cin >> inAmount;
		}
		//단순 선택 출력
		if (inMenu > 0 && inMenu <= ARRSIZE) {
			iMenuitem = inMenu - 1;
			wholePrice[iMenuitem] = iPrice[iMenuitem] * inAmount;
			iCount[iMenuitem] = iCount[iMenuitem] + inAmount;
			cout << "□ [주문상품]" << '\t' << ":" << menuName[iMenuitem] << endl << "□ [잔수]" << '\t' << ":"
				<< inAmount << endl << "□ [총 금액]" << '\t' << ":" << wholePrice[iMenuitem] << "원 주문" << endl << endl;
		}
		else
		{
			cout << "＊없는 메뉴입니다＊ 다시 입력하세요" << endl << endl;
		}

		switch (inMenu) {
		case 1:
			*sumP = *sumP + wholePrice[0];
			break;
		case 2:
			*sumP = *sumP + wholePrice[1];
			break;

		case 3:
			*sumP = *sumP + wholePrice[2];
			break;

		case 4:
			*sumP = *sumP + wholePrice[3];
			break;
		}
	}
}