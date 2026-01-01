#include <iostream>
using namespace std;
int main(){
    int n, iMin, iMax;
    
    cin >> n;
    int iNo[n];
    for (int i=0; i<n; i++){
        cin >> iNo[i];
    }
    iMin = iNo[0];
    iMax = iNo[0];
    
    for (int i=1; i<n; i++){
        if (iNo[i]<iMin){
            iMin = iNo[i];
        }
        if (iNo[i]>iMax){
            iMax = iNo[i];
        }
    }
    cout << iMin << " " << iMax;
}