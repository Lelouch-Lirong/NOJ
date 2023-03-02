/*
奖金M
利润L
    L <= 10                 10%     1+0.75+1+0.6+0.6+
    10 < L < 20             7.5   
    20 <= L < 40            5
    40 <= L < 60            3
    60 <= L < 100           1.5
    100 <= L                1
*/
#include<iostream>
using namespace std;

class money{
    public:
        void solution(void);
};

void money::solution(){
    double L;
    cin>> L;
    double M = 0;
    if(L >= 10){
        M += 10*0.1;
    }else{
        M += L*0.1;
        goto p;
    }

    if(L >= 20){
        M += 10*0.075;
    }else{
        M += (L-10)*0.075;
        goto p;
    }

    if(L >= 40){
        M += 20*0.05;
    }else{
        M += (L-20)*0.05;
        goto p;
    }

    if(L >= 60){
        M += 20*0.03;
    }else{
        M += (L-40)*0.03;
        goto p;
    }

    if(L >= 100){
        M += 40*0.015 + (L-100)*0.01;
    }else{
        M += (L-60)*0.015;
    }
    p:
    printf("%.6lf\n", M);
}

int main()
{
    money m;
    m.solution();
    return 0;
}
