#include <iostream>
#include <string>
using namespace std;
int main()
{
    int iN,longNum;
    string multiLong, result;
    cin >> iN;
    longNum = iN / 4;
    multiLong = "long ";
    result = "int";
    for (int i=0; i<longNum; ++i)
    {
        cout << multiLong;
    }
    cout << result;
}