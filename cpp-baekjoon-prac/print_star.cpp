#include <iostream>
using namespace std;

int main() {

    int iN;
    cin >> iN;
    int iCount = 1;

    while (iCount <= iN) {
        int jCount = 1;
        while (jCount <= iCount) {
            cout << "*";
            jCount++;
        }
        cout << endl;
        iCount++;

    }

    }    
  // 중첩루프
 /*
 #include <iostream>
using namespace std;

int main() {
    int iN;
    cin >> iN;

    for (int iCount = 1; iCount <= iN; ++iCount) {
        
        for (int jCount = 1; jCount <= iCount; ++jCount) {
            cout << "*";
        }
        cout << endl; // 한 줄 출력 후 줄 바꿈
    }

    return 0; 
}
    */
