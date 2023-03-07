/*
高低交换
内联函数
类似于之前写的循环左移
*/
#include<iostream>
using namespace std;
inline int xchg(unsigned char n){
    n = (n<<4) | (n>>4);
    return (int)n;
    //return (n<<4) | (n>>4);
}

int main()
{
    int n;
    cin>>n;
    cout<<xchg(n)<<endl;
    return 0;
}
