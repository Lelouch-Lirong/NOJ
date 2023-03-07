/*
奇特的分数数列
第n项的分母为前一项的分子
第n项的分子为前一项分子分母之和
*/
#include<iostream>
using namespace std;

struct data{
    int n;  //分子
    int d;  //分母
    double val;
};

int main()
{
    data datas[21];
    datas[0].d = 1;
    datas[0].n = 2;
    datas[0].val = 2/1;
    double sum = 0;
    for(int i = 0; i < 20; i++){
        sum += datas[i].val;
        datas[i+1].d = datas[i].n;
        datas[i+1].n = datas[i].n + datas[i].d;
        datas[i+1].val = datas[i+1].n / (double)datas[i+1].d;
    }
    printf("%.6lf\n", sum);
    return 0;
}