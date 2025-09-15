// 정주호 250916
#include <iostream>
using namespace std;

int main() {

	int menu1P = 1500, menu2P = 2000, menu3P = 3000;
	int inMenu;
	int sumP = 0; // 변수는 초기화하고 사용, 위치( while 문 밖 )
	int count1 = 0, count2 = 0, count3 = 0;
	while (true) {
		cout << "====== 나의 작은 카페 메뉴 ======" << endl;
		cout << "1. 아메리카노" << '\t' << menu1P << ":원" << endl;
		cout << "2. 카페라떼" << '\t' << menu2P << ":원" << endl;
		cout << "3. 아이스티" << '\t' << menu3P << ":원" << endl;
		cout << "==================================" << endl;
		cout << "메뉴를 입력하세요 :";
		cin >> inMenu;
		//0이 입력될때까지 판매 금액을 입력한다, 0이 입력되면 중단
		if (inMenu == 0) {

			break;
		}
		switch (inMenu) {
		case 1:
			cout << "상품 [아메리카노], 금액 : " << menu1P << "원 판매" << endl;
			sumP = sumP + menu1P;
			count1++;
			break;

		case 2:
			cout << "상품 [카페라떼], 금액 :" << menu2P << "원 판매" << endl;
			sumP = sumP + menu2P;
			count2++;
			break;

		case 3:
			cout << "상품 [아이스티], 금액 :" << menu3P << "원 판매" << endl;
			sumP = sumP + menu3P;
			count3++;
			break;
		default:
			cout << "없는 메뉴입니다";
			break;
		}
	}
	cout << "총 판매 금액 : " << sumP << "원"; // if~break 안에 쓰는것/밖에쓰는 것 차이
}