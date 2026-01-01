#include <iostream>
using namespace std;
int main()
{
    long long int a,b,c,d;
    cin >> a >> b;
    c = a - b;
    if (c == 0)
    {
        d = 0;
    }
    else if (c<0)
    {
        d = -c;
    }
    else
    {
        d = c;
    }
    cout << d;
}