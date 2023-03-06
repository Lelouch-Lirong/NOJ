/*
数据加密
*/
#include<iostream>
using namespace std;

int encrypt(int num){   //num为四位整数
    char s_num[5];
    sprintf(s_num, "%d", num);
    for(int i = 0; s_num[i] != '\0'; i++){
        s_num[i] = (s_num[i] - '0' + 5) % 10 + '0';
    }
    char tmp;
    tmp = s_num[0];
    s_num[0] = s_num[3];
    s_num[3] = tmp;

    tmp = s_num[1];
    s_num[1] = s_num[2];
    s_num[2] = tmp;

    return atoi(s_num);
}

int main()
{
    int num;
    cin>>num;
    cout<<encrypt(num)<<endl;
    return 0;
}