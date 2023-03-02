/*
input:math, english, C Langugue
output:total grade and average grade
输出保留6位小数
*/
#include<iostream>

using namespace std;

class student
{
    private:
        double math;
        double english;
        double c;
    public:
        student(double, double, double);
        double average(void);
        double total(void);
};
student::student(double math, double english, double c){
    this->math = math;
    this->english = english;
    this->c = c;    
}
double student::average(void){
    return this->total()/3.0; 
}
double student::total(void){
    return this->math+this->c+this->english;
}
int main()
{
    double m, e, c;
    cin>>m>>e>>c;
    student s(m, e, c);
    printf("%.6lf\n%.6lf\n", s.total(), s.average());
    return 0;
}