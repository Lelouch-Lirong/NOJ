/*
特殊整数
字符串字符匹配,不用库，自己实现
*/
#include<iostream>
#include<cmath>
#include<cstdlib>
using namespace std;

//判断input里是否有数字m,是否能被m整除
bool matching(int input, int m){
    if(input%m == 0)    return false;
    char buffer[11]={'\0'};
    char char_m = '0'+m;
    //将整数int转化成字符串，这里偷懒了，用库函数实现了
    //itoa(input, st, 10);     windows平台下
    sprintf(buffer, "%d", input);   //通用的

    for(int i = 0; buffer[i] != '\0'; i++){
        if(buffer[i] == char_m) return true;
    }
    return false;
}
void solution(){
    int m, n;
    cin>>m>>n;
    int number = pow(10, n-1);  //number为最小的n位整数
    int count = 0;              //个数
    int sum = 0;                //和
    int number_max = pow(10, n);
    while(number < number_max){
        if(matching(number, m)){
            count++;
            sum += number;
        }
        number++;
    }
    cout<<count<<" "<<sum<<endl;
    return;
}
int main()
{
    solution();
    return 0;
}

