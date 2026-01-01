#include <iostream>
using namespace std;
int main()
{
    int a, b, result,caseT;
    cin >> caseT;
    for(int i=1; i<=caseT; ++i)
    {
    cin >> a >> b;
    result = a + b;
    cout << "Case #" << i << ": "<< result << endl; 
    }
}