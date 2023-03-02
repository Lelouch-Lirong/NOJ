/*
幸运数：逆序后等于原数 N<100000
STL有现成的函数能用
*/

#include<iostream>
using namespace std;

class LuckNumber{
    public:
        void solution(void);
};
void LuckNumber::solution(){
    int num;
    cin>>num;
    char tmp[6];                //num不超过六位数
    int length = 0;
    while(num > 0){             //将整数字符串化
        tmp[length++] = (num%10)+'0';
        num /= 10;
    }

    int i, j;
    for(i = 0, j = length-1; i < j; i++, j--){
        if(tmp[i] != tmp[j]){
            cout<<"no"<<endl;
            return;
        }
    }
    cout<<"yes"<<endl;
    return;
}
int main()
{
    LuckNumber l;
    l.solution();
    return 0;
}
