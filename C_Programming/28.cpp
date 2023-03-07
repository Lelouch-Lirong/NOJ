/*
分数拆分
1/k = 1/x + 1/y;    x >= y;
先确定y，y>k,且 y <= 2*k
再寻找x，x >= y,当1/x < 1/k - 1/y 时停止
*/
#include<iostream>
#include<cmath>
#define EPS 1e-7
using namespace std;

bool get_x(int &x, int y, int k){
    for(x = y; 1.0/x >= 1.0/k -1.0/y - EPS; x++){
        if(fabs(1.0/x +1.0/y -1.0/k) < EPS){
            return true;
        }
    }
    return false;
}
void output(int k){
    int x, y;
    for(y = k+1; y <= 2*k; y++){
        if(get_x(x, y, k)){
            printf("1/%d=1/%d+1/%d\n", k, x, y);
        }
    }
    return;
}
int main()
{
    int k;
    cin>>k;
    output(k);
    return 0;
}
