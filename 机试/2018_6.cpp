#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;

bool is_(char *str)
{
    int len = strlen(str);
    int i = 0, j = len-1;
    while(i < j){
        if(str[i] != str[j])    return false;
        i++, j--;
    }
    return true;
}

int main()
{
    int n;
    cin>>n;
    char tmp;
    getchar();
    while(n--){
        char str[100];
        cin.getline(str, 100);
        //cout<<str<<endl;
        if(is_(str))    cout<<"yes"<<endl;
        else cout<<"no"<<endl;
    }
    return 0;
}
