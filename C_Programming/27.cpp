/*
什么无限能源
a(t) = b(t-1);
b(t) = 3*a(t-1)+2*b(t-1);
递归也可
*/
#include<iostream>
using namespace std;
void Unlimited_Energy(int time){
    int a = 1;
    int b = 0;
    int a_t, b_t;
    for(int i = 0; i < time; i++){
        a_t = b;
        b_t = 3*a + 2*b;
        a = a_t;
        b = b_t;
    }
    cout<<a<<" "<<b<<endl;
    return;
}

int main()
{
    int time;
    cin>>time;
    Unlimited_Energy(time);
    return 0;
}