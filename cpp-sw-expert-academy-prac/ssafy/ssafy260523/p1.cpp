#include <iostream>
#define ARRSIZE 500

using namespace std;
int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int iTestCase;
	int iBoxNo;
	int iAvg, iSum = 0, iMin, iMax, iRes = 0;
	int iMinIndex, iMaxIndex;

	cin >> iTestCase;
	for (int i = 0; i < iTestCase; ++i)
	{
		iBoxNo = 0;
		bool bCheck = false;
		cin >> iBoxNo;
		int iArr[ARRSIZE] = { 0 };
		for (int j = 0; j < iBoxNo; ++j) {
			cin >> iArr[j];
			iSum += iArr[j];
		}
		iAvg = iSum / iBoxNo;
		for (int k = 0; k < iBoxNo; ++k) {
			if (iArr[k] == iAvg) {
				bCheck = true;
				continue;
			}
			else {
				bCheck = false;
				break;
			}
		}
		if (bCheck == true) {
			iRes = 0;
			cout << "#" << i + 1 << " " << iRes << "\n";
			continue;
		}

		bCheck = false;
		while (bCheck == true) {
			for (int j = 0; j < iBoxNo; ++j) {
				bCheck = (iArr[j] == iAvg);
			}

			iMin = iArr[0];
			iMax = iArr[0];
			iMinIndex = 0; iMaxIndex = 0;
			for (int iSearch = 1; iSearch < iBoxNo; ++iSearch) {
				if (iArr[iSearch] > iMax) {
					iMax = iArr[iSearch];
					iMaxIndex = iSearch;
				}
				if (iArr[iSearch] < iMin) {
					iMin = iArr[iSearch];
					iMinIndex = iSearch;
				}
			}
			while (iArr[iMinIndex] == iAvg) {
				iArr[iMinIndex]++;
				iArr[iMaxIndex]--;
				iRes++;
			}
		}
		cout << "#" << i + 1 << " " << iRes << "\n";
	}
	return 0;
}
/*
N개의 상자가 일렬로 놓여 있다.

각 상자에는 일정 개수의 사탕이 들어 있다.



한 번의 작업에서는 한 상자에서 다른 상자로 사탕 1개를 옮길 수 있다.



모든 상자에 들어 있는 사탕의 개수를 서로 같게 만들려고 한다.

이때 필요한 작업 횟수의 최솟값을 구하라.



단, 항상 모든 상자의 사탕 개수를 같게 만들 수 있는 경우만 입력으로 주어진다.



예를 들어, 상자 4개의 사탕 개수가 각각 2, 4, 7, 3 개라고 하자.

1. 3번째 상자에서 1번째 상자로 사탕 2개를 옮긴다.

2. 3번째 상자에서 4번째 상자로 사탕 1개를 옮긴다.

그러면 각 상자의 사탕 개수는 4, 4, 4, 4가 된다.

총 작업 횟수는 3회이며, 이것이 가능한 최소 횟수이다.



[제약사항]

1.     N은 2 이상 500 이하이다. (2 ≤ N ≤ 500)

2.     각 상자에 들어 있는 사탕의 개수는 1 이상 500 이하이다.

3.     모든 상자의 사탕 개수를 같게 만들 수 있는 입력만 주어진다.






 [입력]

첫 번째 줄에 테스트 케이스의 개수 T가 주어진다.

각 테스트 케이스는 다음과 같이 구성된다.

첫 번째 줄에 상자의 개수 N이 주어진다.

두 번째 줄에 각 상자에 들어 있는 사탕의 개수를 나타내는 N개의 정수가 공백으로 구분되어 주어진다.



[출력]

각 테스트 케이스마다 한 줄에 '#x'를 출력한 뒤, 공백을 하나 두고 문제에서 정의된 모든 상자의 사탕 개수를 같게 만들기 위한 최소 작업 횟수를 출력한다.

여기서 x는 테스트 케이스 번호(1부터 시작)이다.
*/