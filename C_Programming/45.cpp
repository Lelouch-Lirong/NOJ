/*
// 输出右下角
// 行：i/n
// 列：i%n 
*/
// (0,2)
// (1,1)(1,2)
// (2,0),(2,1)(2,2)
// 第i行可以输出(i/n+1)个数
// (i/n+1) + (i%n) >= n
#include<iostream>
using namespace std;

void output(int n, int *input){
    for(int i = 0; i < n*n; i++){
        if(i/n+1 + i%n >= n )  {                           //输出右下角
            cout<<input[i]<<" ";       
        }else{
            cout<<" "<<" ";                         //左下角空位
        } 
        if(i%n == n-1)  cout<<endl;                 //换行
    }
    return;
}

int main()
{
    int n;
    cin>>n;
    int *input;
    input = (int*)malloc(n*n*sizeof(int));
    for(int i = 0; i < n*n; i++){
        cin>>input[i];
    }
    output(n, input);
    free(input);
    return 0;
}