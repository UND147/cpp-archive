#include <iostream>
using namespace std;
int main()
{
    int iCase;
    int iNo1, iNo2, iResult;
    cin >> iCase;
    for(int i=0;i<iCase;++i){
        cin >> iNo1 >> iNo2;
        iResult = iNo1 + iNo2;
        cout << "Case #" << (i+1) << ": " << iNo1 << " + " << iNo2 << " = " << iResult << endl;
    }
}