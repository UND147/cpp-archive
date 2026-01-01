// 숫자의 합
// 문제:N개의 숫자가 공백 없이 쓰여있다. 이 숫자를 모두 합해서 출력하는 프로그램을 작성하시오.
// 입력:첫째 줄에 숫자의 개수 N (1 ≤ N ≤ 100)이 주어진다. 둘째 줄에 숫자 N개가 공백없이 주어진다.
// 출력:입력으로 주어진 숫자 N개의 합을 출력한다.
#include <iostream>
#include <string>
using namespace std;
int main()
{
    int iN;
    cin >> iN;
    string sNumbers;
    cin >> sNumbers;
    int iSum = 0;
    for (int i=0; i<iN; ++i)
    {
        int iTemp;
        iTemp = sNumbers[i] - '0';
        iSum = iSum + iTemp;
    }
    cout << iSum;
}