/*
计算PI,保留六位小数
*/
#include<iostream>
#include<cmath>
using namespace std;

class PI{
    public:
        double get_PI(void);
};
double PI::get_PI(){
    double pi = 0;
    double i = 1;
    bool flag = false;
    while(1/i > pow(10, -6)){
        pi += (1/i)*(flag ? -1:1);
        flag = !flag;
        i += 2;
    }
    return pi*4;
}

int main()
{
    PI p;
    printf("%.6lf\n", p.get_PI());
    return 0;
}