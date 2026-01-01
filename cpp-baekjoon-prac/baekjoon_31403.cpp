#include <iostream>
#include <string>
using namespace std;
int main(){
    int a, b, c;
    int iResult, iResult2;
    string sTemp;
    
    cin >> a >> b >> c;
    iResult = a+b-c;
    sTemp = to_string(a)+to_string(b);
    iResult2 = stoi(sTemp)-c;
    cout << iResult << endl;
    cout << iResult2;
}