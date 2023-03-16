#include<iostream>
#include<cmath>
#include<cstdio>
using namespace std;

void function(double a, double b, double c){
    double max_ = max( max(a, b), c);
    double min_ = min( min(a, b), c);
    double mid = a+b+c - max_ - min_;

    if(max_ >= min_ + mid){
        cout<<"NaN"<<endl;
        return;
    }else{
        double p = (a +b +c)/2;

        double res = sqrt(p*(p-a)*(p-b)*(p-c));
        printf("%.2lf\n", res);
        return;
    }
}

int main()
{

    int n;
    double a,b,c;
    cin>>n;
    while(n--){
        cin>>a>>b>>c;
        function(a, b, c);
    }
}
