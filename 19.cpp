/*
迭代求根
*/
#include<iostream>
using namespace std;

double solution(double a){
    double x = 1;
    double x_n = (x+a/x)/2;
    while(abs(x_n - x) > 0.00001){
        x = x_n;
        x_n = (x+a/x)/2;
    }
    return x_n;
}
int main()
{
    double a;
    cin>>a;
    cout<<solution(a)<<endl;
    return 0;
}
