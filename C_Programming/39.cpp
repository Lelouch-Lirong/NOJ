/*
获取指定二进制位
将n左移k-1位，再与1做与操作
*/
#include<iostream>
using namespace std;
int getbit(int n, int k){
    n = n>> (k-1);
    n = n & 1;
    return n;
}
int main()
{
    int n, k;
    cin>>n>>k;
    cout<<getbit(n, k)<<endl;
    return 0;
}
