/*
다음 100X100의 2차원 배열이 주어질 때, 각 행의 합, 각 열의 합, 각 대각선의 합 중 최댓값을 구하는 프로그램을 작성하여라.
다음과 같은 5X5 배열에서 최댓값은 29이다.
[제약 사항]
총 10개의 테스트 케이스가 주어진다.
배열의 크기는 100X100으로 동일하다.
각 행의 합은 integer 범위를 넘어가지 않는다.
동일한 최댓값이 있을 경우, 하나의 값만 출력한다.
[입력]
각 테스트 케이스의 첫 줄에는 테스트 케이스 번호가 주어지고 그 다음 줄부터는 2차원 배열의 각 행 값이 주어진다.
[출력]
#부호와 함께 테스트 케이스의 번호를 출력하고, 공백 문자 후 테스트 케이스의 답을 출력한다.
*/
// <이차원배열에서> 배열 자료가 연속적으로 저장되기 때문에(컴퓨터는 사각형으로 생각하지 않음) 행이 언제 끝나는지 알 수가 없어서
// 한 행이 언제 끝나는지 알려면 행 크기를 지정해야 알 수 있음
#include <iostream>
#define ARR_SIZE 100
using namespace std;
int getMaxRowSum(int iArr[][ARR_SIZE]);
int getMaxColSum(int iArr[][ARR_SIZE]);
int getLCrossSum(int iArr[][ARR_SIZE]);
int getRCrossSum(int iArr[][ARR_SIZE]);
int main(int argc, char** argv)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int iCaseNo, iResMax;
    int iRes[4];
    int iArr[ARR_SIZE][ARR_SIZE];
    
    for(int t=0; t<10; ++t)
    {
        cin >> iCaseNo;
        for(int i=0; i<ARR_SIZE; ++i){
            for(int j=0; j<ARR_SIZE; ++j){
                cin >> iArr[i][j];
            }
        }
        iRes[0] = getMaxRowSum(iArr);
        iRes[1] = getMaxColSum(iArr);
        iRes[2] = getLCrossSum(iArr);
        iRes[3] = getRCrossSum(iArr);
        iResMax = iRes[0];
        for(int e = 0; e<3; ++e){
            if(iRes[e+1] > iResMax){
                iResMax = iRes[e+1];
            }
        }
        //cout << "#" << iCaseNo << " " << iRowMax;
        //cout << "#" << iCaseNo << " " << iColMax;
        cout << "#" << iCaseNo << " " << iResMax;
        cout << "\n";
    }
    return 0;
}
int getMaxRowSum(int iArr[][ARR_SIZE]){
    int iRowSum[ARR_SIZE];
    int iSum, iMax;
    for(int i=0; i<ARR_SIZE; ++i){
        iSum = 0;
        for(int j=0; j<ARR_SIZE; ++j){
            iSum += iArr[i][j];
            
        }
        iRowSum[i] = iSum;
    }
    iMax = iRowSum[0];
    for(int k=0; k<ARR_SIZE - 1; ++k){
        if(iRowSum[k+1] > iMax){
            iMax = iRowSum[k+1];
        }
    }
    return iMax;
}
int getMaxColSum(int iArr[][ARR_SIZE]){
    int iColSum[ARR_SIZE];
    int iSum, iMax;
    for(int i=0; i<ARR_SIZE; ++i){
        iSum = 0;
        for(int j=0; j<ARR_SIZE; ++j){
            iSum += iArr[j][i];
            
        }
        iColSum[i] = iSum;
    }
    iMax = iColSum[0];
    for(int k=0; k<ARR_SIZE - 1; ++k){
        if(iColSum[k+1] > iMax){
            iMax = iColSum[k+1];
        }
    }
    return iMax;
}
int getLCrossSum(int iArr[][ARR_SIZE]){
    int iSum = 0;
    for(int i=0; i<ARR_SIZE; ++i){
        iSum += iArr[i][i];
    }
    return iSum;
}
int getRCrossSum(int iArr[][ARR_SIZE]){
    int iSum = 0;
    // 0 => 99 , 1 => 98
    for(int i=0; i<ARR_SIZE; ++i){
        int iColIndex = ARR_SIZE - 1 - i;
        iSum += iArr[i][iColIndex];
    }
    return iSum;
}