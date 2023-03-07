/*
方差
不允许用数组
s=(x1-x)^2+(x2-x)^2=(x1^2+x2^2)+2*x^2-2*x*(x1+x2)
*/

#include<iostream>
using namespace std;
int main()
{
    double sum = 0;
    double sum_2 = 0;
    int n;
    double tmp;
    cin>>n;
    for(int i = 0; i < n; i++){
        cin>>tmp;
        sum += tmp;
        sum_2 += tmp*tmp;
    }
    double average = sum/n;
    double res =sum_2+n*average*average-2*average*sum;
    printf("%.6lf\n", res);
    return 0;
}