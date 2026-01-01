#include <iostream>
using namespace std;

int main() {
    int iN;
    cin >> iN;
    int iCount = 1;
    int iResult;
    
    while (iCount <= 9) {
        iResult = iN * iCount;
        cout << iN << " * " << iCount << " = " << iResult << endl;
        iCount++;
        

    }    
  

}