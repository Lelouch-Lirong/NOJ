/*
幸运数字7
*/
#include<iostream>
using namespace std;

bool is_7(int n){
    if(n%7 == 0)    return true;
    char tmp[6];
    sprintf(tmp, "%d", n);
    for(int i=0; tmp[i] != '\0'; i++){
        if(tmp[i] == '7')   return true;
    }
    return false;
}
int main()
{
    int n;
    cin>>n;
    for(int i = 7; i <= n; i++){
        if(is_7(i)) cout<<i<<" ";
    }
    cout<<endl;
    return 0;
}