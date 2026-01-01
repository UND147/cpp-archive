#include <iostream>
using namespace std;
int main()
{
    int iNum, iSum = 0;
    cin >> iNum;
    for (int i=0; i<iNum; ++i)
    {
        iSum = (iSum+1) + i;
    }
    cout << iSum;
}