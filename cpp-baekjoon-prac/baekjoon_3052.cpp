#include <iostream>
using namespace std;
int main()
{
    int iNum[10], iRem[10], result=0;
    bool used[10] = {false};
    for(int i=0; i<10; ++i)
    {
        cin >> iNum[i];
        iRem[i] = iNum[i] % 42;
    }
    for(int j=0; j<10; ++j)
    {
        if(!used[j]) //0은 무조건 false = 사용되지 않음, true = 사용된 숫자임, if문(true)이면 진행됨, used[0]은 false 따라서 !used[0]은 true이므로 조건이 진행됨.
            {
                result++;
                for(int k = j+1; k<10; ++k)
                {
                    if(iRem[j] == iRem[k])
                    {
                    used[k] = true;
                    }
                }
            }
    }
    cout << result;
} 