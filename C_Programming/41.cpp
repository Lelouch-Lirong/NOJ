/*
// 输出右上角
*/
#include<iostream>
using namespace std;

void output(int n, int *input){
    for(int i = 0; i < n*n; i++){
        if(i/n <= i%n)  {                           //输出右上角
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