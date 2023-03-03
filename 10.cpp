#include<iostream>
#include<cmath>
using namespace std;

class solution{
    public:
        double distance(double, double, double, double);
        int high(double x, double y);
};
double solution::distance(double x1, double y1, double x2, double y2){
    return sqrt( pow((x1-x2), 2) + pow((y1-y2), 2) );
}
int solution::high(double x, double y){
    bool flag1 = distance(x, y, 2, 2)>1? false: true;
    bool flag2 = distance(x, y, -2, 2)>1? false: true;
    bool flag3 = distance(x, y, 2, -2)>1? false: true;
    bool flag4 = distance(x, y, -2, -2)>1? false: true;

    if(flag1 || flag2 || flag3 || flag4)    return 10;
    else return 0;
}

int main()
{
    double x, y;
    char d;
    cin>>x>>d>>y;
    solution s;
    cout << s.high(x, y) << endl;
    return 0;
}