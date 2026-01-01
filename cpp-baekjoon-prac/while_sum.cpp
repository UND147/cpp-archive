#include <iostream>
using namespace std;
int main()
{
    int a, b, result;
    while(true)
    {
        cin >> a >> b;
        if((a == 0) && (b==0))
        {
            break;
        }
        else
        {
            result = a + b;
            cout << result << endl;
        }
    }
}