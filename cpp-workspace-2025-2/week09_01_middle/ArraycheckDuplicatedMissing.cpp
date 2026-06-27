//A3 225230001 정주호
#include <iostream>
using namespace std;
#define ARRSIZE 10
void getArray(int iNo[], int iCount[]);
void prnArray(int iNo[]);
void prnDuplicates(int iCount[]);
void prnMissing(int iCount[]);
int main()
{
	int iNo[ARRSIZE];
	int iCount[ARRSIZE] = { 0 };
	getArray(iNo);
	prnArray(iNo);
	prnDuplicates(iCount);
	prnMissing(iCount);
}
void getArray(int iNo[], int iCount[])
{
	cout << "0~9 사이의 정수 10개를 입력하세요:" << endl;
	for (int i = 0; i < ARRSIZE;)
	{
		cout << i + 1 << "번째 정수 입력: ";
		cin >> iNo[i];


		if (iNo[ARRSIZE] >= 0 && iNo[ARRSIZE] <= 9)
		{
				iCount[iNo[ARRSIZE]]++;
			i++; //
		}
		else
		{
			cout << "[경고] 0~9 사이의 정수만 입력해야 합니다. 해당 입력은 무시됩니다." << endl;
		}
	}
	cout << endl;
}
void prnArray(int iNo[])
{
	for (int i = 0; i < ARRSIZE; ++i)
	{
		cout << iNo[i] << " ";
	}
}
void prnDuplicates(int iCount[])
{
	bool bIsDuplicate = false;

	cout << "중복 입력된 정수: ";
	for (int j = 0; j < ARRSIZE; ++j)
	{
		if (iCount[j] > 1)
		{
			cout << j << " "; 
			bIsDuplicate = true;
		}
	}
	if (!bIsDuplicate)
	{
		cout << "중복 입력된 정수 없음";
	}
	cout << endl;
}
void prnMissing(int iCount[])
{
	bool bIsNotInput = false;

	cout << "입력되지 않은 정수: ";
	for (int k = 0; k < ARRSIZE; ++k)
	{
		if (iCount[k] == 0)
		{
			cout << k << " "; 
			bIsNotInput = true;
		}
	}
	if (!bIsNotInput)
	{
		cout << "0~9 사이에서 입력되지 않은 정수 없음";
	}
	cout << endl;
}