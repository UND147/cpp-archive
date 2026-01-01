#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    double iDiv;
    iDiv = (double)a / (double)b;
    printf("%.15f", iDiv);
}