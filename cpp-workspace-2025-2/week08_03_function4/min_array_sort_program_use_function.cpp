//정주호 251024
//MIN Array Sort program => Use function
#include <iostream>
#define ARRSIZE 10
using namespace std;
void getArray(int iNum[]); // 배열 입력 함수
void prnArray(int iNum[]); // 배열 출력 함수 ... or (int *iNum) 
void sortArray(int iNum[]); // 배열 정렬 함수 ...
void swapIndex(int* iFirst, int* iSecond);
void main()
{
	int iNum[ARRSIZE];
	//int iNum[ARRSIZE] = { 5, 2, 9, 2, 8, 1, 4, 7, 6, 9 }; 5 2 9 2 8 1 4 7 6 9
	//입력
	getArray(iNum);
	//출력
	cout << "[초기값]" << endl;
	prnArray(iNum);
	cout << "-----------------------" << endl;
	sortArray(iNum);
	cout << "-----------------------" << endl;
	cout << "[정렬 결과]" << endl;
	prnArray(iNum);
}
void prnArray(int iNum[])
{
	for (int k = 0; k < ARRSIZE; ++k)
	{
		cout << iNum[k] << " ";
	}
	cout << endl;
}
void sortArray(int iNum[])
{
	int iMin, iIndex = 0;
	for (int iLoop = 0; iLoop < ARRSIZE; ++iLoop)
	{
		iMin = iNum[iLoop];
		iIndex = iLoop;
		for (int j = iLoop; j < ARRSIZE; ++j)
		{
			if (iMin > iNum[j])
			{
				iMin = iNum[j];
				iIndex = j;
			}
		}
		cout << "[최솟값] : " << iMin << " , [인덱스] : " << iIndex << endl;
		swapIndex(&iIndex, &iLoop);

		prnArray(iNum);
	}
}
void getArray(int iNum[])
{
	cout << "정수 10개 입력 : ";
	for (int i = 0; i < ARRSIZE; ++i)
	{
		cin >> iNum[i];
	}
}
void swapIndex(int* iFirst, int* iSecond)
{
	int iTemp;
	iTemp = *iFirst;
	*iFirst = *iSecond;
	*iSecond = iTemp;
}