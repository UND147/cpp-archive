// 정주호 250930
//주사위를 1000번 던지는 상황을 시뮬레이션하고, 각 주사위 줄눈이 나타난 횟수를 출력하시오
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
	srand(time(NULL));
	int diceNum[6] = { 0 }, numSimul = 1000, iIndex;
	int iRand;

	for (int i = 0; i < numSimul; ++i)
	{
		iRand = rand() % 6 + 1;
		iIndex = iRand - 1;
		diceNum[iIndex] = diceNum[iIndex] + 1;
	}
	//출력
	for (int r = 0; r < 6; ++r)
	{
		cout << r + 1 << "의 자리 횟수" << diceNum[r] << endl;
	}
}
/*
cout << iRand << endl;
-> for문 ...1000회

*/