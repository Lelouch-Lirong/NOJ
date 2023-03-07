/*
递归法输出数字逆序
*/
#include<iostream>
using namespace std;

void func(int n){
    if(n == 0){
        cout<<endl;
        return;
    }
    cout<<n%10;
    func(n/10);
    return;
}
int main()
{
    int n;
    cin>>n;
    func(n);
    return 0;
}