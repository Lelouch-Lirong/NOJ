/*
循环位移
位移的是二进制
sb题目，给个错误的样例
*/
#include<iostream>
using namespace std;

int move(int val, int n){
    if(n < 0){      //左移
        //uint16_t res = val << n;
        n = -n;
        return (val << n)| (val >> (32-n));
    }else if(n > 0){
        return (val >> n)| (val << (32-n));
    }else return val;
}

int main()
{
    int val;
    int n;
    cin>>val>>n;
    cout<<move(val, n)<<endl;
    return 0;
}