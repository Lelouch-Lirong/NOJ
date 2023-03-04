/*
二分求根
https://zhuanlan.zhihu.com/p/115854764
*/
#include<iostream>
#include<cmath>
using namespace std;

double func(double x){
    return (2.0*pow(x, 3)-4*pow(x, 2)+3*x-6);
}

double find_root(double left, double right){
    double mid = (left+right)/2;
    if(abs(func(mid)) < 0.000001) return mid;
    if(func(mid)*func(left) < 0)    return find_root(left, mid);
    if(func(mid)*func(right) < 0)    return find_root(mid, right);
    
    //三处都同号
    //此处应该是错误处理函数，但noj不要求
    return 404;   
}

int main()
{
    double left, right;
    cin>> left >> right;
    printf("%.2lf\n", find_root(left, right));
    return 0;
}