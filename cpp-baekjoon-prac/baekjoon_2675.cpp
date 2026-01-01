#include <iostream>
#include <string>
using namespace std;

int main(){
    string s;
    int iCase;
    int iRepeat;

    cin >> iCase;
    for(int i=0; i<iCase; ++i){
        cin >> iRepeat;
        cin >> s;
        for(int j=0; j<s.length(); ++j){
            for(int k=0; k<iRepeat; ++k){
                cout << s[j];
            }
        }
        cout << endl;
    }
}