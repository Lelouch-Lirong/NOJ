/*
韩信点兵
暴力解法
*/

#include<iostream>
using namespace std;

int get_Num(int a, int b, int c){
    int num = c;
    
    for(int factor = 1; num <= 100; factor++){
        if(num%3 == a && num%5 == b){
            return num>9? num:-1;
        }
        num = 7*factor + c;
    }
    return -1;
}

int main()
{
    int a, b, c;
    cin>>a>>b>>c;
    cout<<get_Num(a, b, c)<<endl;
    return 0;
}


