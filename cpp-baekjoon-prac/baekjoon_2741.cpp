#include <iostream>
using namespace std;
int main()
{
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);
    int iCount, a = 1;
    cin >> iCount;
    for(int i=0; i<iCount; ++i)
    {
        cout << a << '\n';
        a = a + 1;
    }
}