/*
阿里嘎多，美羊羊桑
*/
#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int x, y, a, b, L;
    cin>>x>>y>>a>>b>>L;
    int time = 1;
    if(a == b){
        cout<<"impossible"<<endl;
        return 0;
    }
    while((x+a)%L != (y+b)%L){
        x = (x+a)%L;
        y = (y+b)%L;
        time++;
    }
    cout<<time<<endl;
    return 0;
}