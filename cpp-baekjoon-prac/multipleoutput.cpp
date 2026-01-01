#include <iostream>
#include <string>
using namespace std;

int main(){
    int a, b;
    cin >> a >> b;
    string s = to_string(b);

    int b0 = s[0] - '0';
    int b1 = s[1] - '0';
    int b2 = s[2] - '0';
    
    int total1 = a * b2;
    int total2 = a * b1;
    int total3 = a * b0;
    cout << total1 << endl << total2 << endl << total3 << endl;
    
    int totalAll = total1 + (total2 * 10) + (total3 * 100);
    cout << totalAll;
    
}