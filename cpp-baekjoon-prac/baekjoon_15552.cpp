#include <iostream>
using namespace std;
int main()
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    
    int caseT, a, b, result;
    cin >> caseT;
    for(int i=0; i<caseT; ++i)
    {
        cin >> a >> b;
        result = a + b;
        cout << result << '\n';
        result = 0;
    }
}