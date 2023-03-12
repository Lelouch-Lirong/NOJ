/*
数组加法
*/
#include<iostream>
using namespace std;
void array_plus(int *a, int *b, int *c, int n){
    for(int i = 0; i < n; i++)  c[i] = a[i] + b[i];
}
int main()
{
    int n;
    int a[101], b[101], c[101];
    cin>>n;
    for(int i = 0; i < n; i++)  cin>>a[i];
    for(int i = 0; i < n; i++)  cin>>b[i];
    array_plus(a, b, c, n);
    for(int i = 0; i < n; i++)  cout<<c[i]<<" ";
    cout<<endl;
    return 0;
}