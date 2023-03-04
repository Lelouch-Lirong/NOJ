/*
两个整数之间的所有素数
把14.cpp改一下就行
*/
#include<iostream>
using namespace std;

bool is_prime(int num){
    if(num < 2) return false;       //其实这里应该抛出错误
    for(int i = 2; i < num; i++){
        if(num%i == 0)  return false;
    }
    return true;
}
int main()
{   
    int left, right, tmp;
    cin>>left>>right;
    if(left > right){
        tmp = left;
        left = right;
        right = tmp;
    }
    for(int i = left+1; i < right ; i++){
        if(is_prime(i)){
            cout<<i<<" ";
        }
    }
    cout<<endl;
    return 0;
}
