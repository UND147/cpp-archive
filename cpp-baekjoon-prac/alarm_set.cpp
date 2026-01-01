#include <iostream>
using namespace std;
int main() 
{
    int minute, hour;
    int phour, pminute, setminute = 45;
    cin >> hour >> minute;
    if (minute < setminute)
    {
        pminute = (60 - setminute) + minute;
        if (hour == 0)
        {
            phour = 23;
        }
        else
        {
            phour = hour - 1;
        }
    }
    else
    {
        pminute = minute - setminute;
        phour = hour;
    }
    cout << phour << " " << pminute;
}