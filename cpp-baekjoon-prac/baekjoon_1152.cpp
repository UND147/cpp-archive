#include <iostream>
#include <string>
using namespace std;

int main(){
    string s;
    int iCount = 1;
    
    getline(cin, s);
    for(int i=0; i<s.length(); i++){
        if(s[i] == ' '){
            iCount++;
        }
    }
    if (s[0] == ' ') {
        iCount--;
        }

        if (s[s.length() - 1] == ' ') {
        iCount--;
        }
    cout << iCount;
}