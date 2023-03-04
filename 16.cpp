/*
求一个整数x的a次方的后三位数
直接计算x的a次方会导致数据溢出错误
我们只需要计算后三位数即可
*/
#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int x, a;
    cin>>x>>a;

    /*int会溢出
    cout<< (int)pow(x, a) <<endl;
    cout<< ((int)pow(x, a))%1000<<endl;
    */
    int sum = 1;
    for(int i = 0; i < a; i++){
        sum *= x;
        sum %= 1000;
    }
    cout<<sum<<endl;
    return 0;
}