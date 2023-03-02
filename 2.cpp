/*
计算圆和圆球
输出保留两位小数
使用gcc编译需要链接std库：gcc -lstdc++
使用g++不需要
*/
#include<iostream>
#include<cmath>
using namespace std;

class solution
{
    private:
        double r;      //半径
        double h;      //高
    public:
        void input(double, double);
        double get_L(void);
        double get_S(void);
        double get_SQ(void);
        double get_VQ(void);
        double get_VZ(void);
};
void solution::input(double r, double h){
    this->r = r;
    this->h = h;
    return;
}
double solution::get_L(void){
    return 2*M_PI*this->r;
}
double solution::get_S(void){
    return M_PI*this->r*this->r;
}
double solution::get_SQ(void){
    return 4*M_PI*this->r*this->r;
}
double solution::get_VQ(void){
    return 4.0/3.0*M_PI*this->r*this->r*this->r;
}
double solution::get_VZ(void){
    return this->get_S()*this->h;
}
int main()
{
    double r, h;
    cin>>r>>h;
    solution sl;
    sl.input(r, h);
    /*
    cout<<sl.get_L()<<endl
        <<sl.get_S()<<endl
        <<sl.get_SQ()<<endl
        <<sl.get_VQ()<<endl
        <<sl.get_VZ()<<endl;
    */
    printf("%.2lf\n%.2lf\n%.2lf\n%.2lf\n%.2lf\n",
            sl.get_L(), sl.get_S(), sl.get_SQ(),
            sl.get_VQ(), sl.get_VZ());
    return 0;
}