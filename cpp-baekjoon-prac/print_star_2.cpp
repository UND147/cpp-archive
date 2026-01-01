#include <iostream>
using namespace std;
int main()
{ 
    int n, lineCount, blankCount, starCount;
    cin >> n;
    lineCount = n;
    for(int i=0; i<lineCount; ++i)
    {
        blankCount = (n-1) - i;
        for (int k=0; k<blankCount; ++k)
        {
        cout << " ";
        }
        starCount = i + 1;
        for (int j=0; j<starCount; ++j)
        {
        cout << "*";
        }
    cout << endl;
    }
}