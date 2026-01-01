#include <iostream>
#define ARRSIZE 9
using namespace std;
int main(){
    int iNo[ARRSIZE];
    int iMax, iIndex;
    for(int i = 0; i < ARRSIZE; ++i){
        cin >> iNo[i];
    }
    iMax = iNo[0];
    iIndex = 1;
    for(int j = 1; j < ARRSIZE; ++j){
        if(iMax<iNo[j]){
            iMax = iNo[j];
            iIndex = j+1;
        }
    }
    cout << iMax << endl;
    cout << iIndex;
}