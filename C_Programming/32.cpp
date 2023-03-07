/*
组合数
C(n,m)=n!/((n-m)!*m!)       (m<=n)
或
C(n,m)=C(n-1,m-1)+C(n-1,m)
*/
#include<iostream>
using namespace std;

//返回n的阶乘
int factorial(int n){
    int res = 1;
    for(int i = n; i > 0; i--){
        res *= i;
    }
    return res;
}

int combination(int m, int n){
    return factorial(n)/(factorial(n-m)*factorial(m));
}

int combination_2(int m, int n){
    if(m == 0)  return 1;
    if(m == 1)  return n;
    if(m == n)  return 1;
    return combination_2(m-1, n-1)+combination_2(m, n-1);
}
int main()
{
    int m, n;
    cin>>n>>m;
    //下面两个都可以，都AC了
    //cout<<combination(m, n)<<endl;
    cout<<combination_2(m, n)<<endl;
    return 0;
}