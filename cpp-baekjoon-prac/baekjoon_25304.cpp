#include <iostream>
using namespace std;
int main()
{
    int totalX, typesN, priceA, countB, eachPrice, totalPrice;
    cin >> totalX;
    cin >> typesN;
    totalPrice = 0;
    for(int i=0; i<typesN; ++i)
    {
        cin >> priceA >> countB;
        eachPrice = priceA * countB;
        totalPrice = totalPrice + eachPrice;
    }
    if(totalPrice == totalX)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }
}