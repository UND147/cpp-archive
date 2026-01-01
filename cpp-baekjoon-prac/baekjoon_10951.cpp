#include <iostream>
using namespace std;
int main()
{
    int a, b, total;
    while(true)
    {
        cin >> a >> b;
        if(cin.eof()) // if(!(cin >> a >> b))
        {
            break;
        }
        total = a+b;
        cout << total << endl;
    }
} 