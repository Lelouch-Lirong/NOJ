/*
亲和数
*/
#include<iostream>
using namespace std;
int sum(int n){     //返回n的真约数之和
    int sum = 0;
    for(int i = 1; i < n; i++){
        if(n % i == 0)    sum += i;
    }
    return sum;
}
bool is_(int a, int b){
    if(sum(a) == b && sum(b) == a)  return true;
    return false;
}
int main()
{
    int a, b;
    cin>>a>>b;
    if(is_(a, b))   cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}