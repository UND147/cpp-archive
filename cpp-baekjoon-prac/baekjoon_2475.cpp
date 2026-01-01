#include <iostream>
using namespace std;
int main()
{
    int iNum[5],iSum=0, total;
    for(int i=0; i<5; ++i)
    {
        cin >> iNum[i];
    }
    for(int k=0; k<5; ++k)
    {
        iNum[k] = iNum[k] * iNum[k];
        iSum = iSum + iNum[k]; 
    }
    total = iSum % 10;
    cout << total;
}