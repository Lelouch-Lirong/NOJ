/*
危险的组合
动态规划：动态规划中本阶段的状态往往是上一阶段状态和上一阶段决策的结果
我们可以用状态转移方程来表示
设：f(n)为n个盒子排成一行的放置方法数目
分情况讨论：
    (1)去掉最后一个盒子后，剩余的n-1的盒子依然符合条件，
        n-1个剩余的盒子的放置方法数目为f(n-1),去掉的盒子可以为铀或铅，
        这种情况 2*f(n-1);
    (2)去掉最后一个盒子后，剩余的不符合条件，则最后四个盒子必为：
        铅、铀、铀、铀，去掉这四个盒子，剩余的n-4个盒子的排列数为2^(n-4)-f(n-4);
综上：状态转移方程为
    f(0)=f(1)=f(2)=0;
    f(3)=1;
    f(n) = 2*f(n-1)+2^(n-4)-f(n-4);
从n=3往后推即可计算出f(4)、f(5)......
*/
#include<iostream>
#include<cmath>
using namespace std;
int f(int n){
    switch(n){
        case 0:
        case 1:
        case 2:
            return 0;
        case 3:
            return 1;
        default:
            return 2*f(n-1)+pow(2,n-4)-f(n-4);
    }
}
int main()
{
    int n;
    cin>>n;
    cout<<f(n)<<endl;
    return 0;
}
