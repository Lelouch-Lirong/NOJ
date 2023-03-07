/*
发工资
*/
#include<iostream>
using namespace std;

int the_min(int money){
    int cnt = 0;
    if(money >= 100){
        cnt += money / 100;
        money %= 100;
    }
    if(money >= 50){
        cnt += money / 50;
        money %= 50;
    }
    if(money >= 10){
        cnt += money / 10;
        money %= 10;
    }
    if(money >= 5){
        cnt += money / 5;
        money %= 5;
    }
    if(money >= 2){
        cnt += money / 2;
        money %= 2;
    }
    if(money >= 1){
        cnt += money / 1;
        money %= 1;
    }
    return cnt;
}

int main()
{
    int n;
    cin>>n;
    int *money = (int*)malloc(sizeof(int)*n+1);
    int total = 0;

    for(int i = 0; i < n; i++){
        cin>>money[i];
        total += the_min(money[i]); 
    }
    cout<<total<<endl;
    return 0;
}