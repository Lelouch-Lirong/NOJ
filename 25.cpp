/*
1的传奇
暴力解法    TE了
*/
#include<iostream>
using namespace std;
/*
//暴力解法 TE
int count_1(char *num){
    int count = 0;
    for(int i = 0; num[i] != '\0'; i++){
        if(num[i] == '1')   count++;
    }
    return count;
}

int main()
{
    int n;
    cin>>n;
    char num[10];
    int count = 0;
    for(int i = 1; i <= n; i++){
        sprintf(num,"%d",i);
        count += count_1(num);
    }
    cout<<count<<endl;
    return 0;
}
*/
/*
xxxxxxxxx1~1000000000
f(01xxxxxxxx) = f(00xxxxxxxx) + 1

121 / 1 =121
low = 121 %1 = 0
cur = 121 %10 = 1
high = 121 /10 = 12
res += 12*1+0+1=13 
*/
/*
找规律
    从 1 至 10，在它们的个位数中，任意的 X 都出现了 1 次。
    从 1 至 100，在它们的十位数中，任意的 X 都出现了 10 次。
    从 1 至 1000，在它们的百位数中，任意的 X 都出现了 100 次
https://www.cnblogs.com/cyjb/p/digitOccurrenceInRegion.html

https://tieba.baidu.com/p/3034871889#50295827144l
*/
int find_1(int n)
{
    int factor; int res; int low, cur, high;
    factor = 1; res = 0;
    while (n / factor)
    {
        low = n % factor;
        cur = n / factor % 10;
        high = n / factor / 10;
        if (cur == 0) res += high * factor;
        else if (cur == 1) res += high * factor + low + 1;
        else res += (high+1) * factor;
        factor *= 10;
    }
    return res;
}
/*
例如 n = 1024;
(1) low = 0;        //低位
    cur = 4;        //当前位 (个位)
    high = 102;     //高位
    1-1020中，共有102个10，个位1共出现了102*1个，剩下1021-1024出现1个个位1(cur>1)
    res+=(102+1)*1;

(2) low = 4;
    cur = 2;
    high = 10;
    1-1000,共有10个100，十位1共出现了10*10个，剩下1001-1024出现1*10个十位1(cur>1)
    res+=(10+1)*10;
(3) low = 24;
    cur = 0;
    high = 1;
    1-1000,共有1个1000，百位1共出现1*100个，剩下1001-1024出现0个百位1(cur=0)
    res+=1*100;
(4) low = 24;
    cur = 1;
    high = 0;
    0*1000,1000~1024出现low(24)+1个千位1
    res+=0*1000+24+1；
综上，res=103+110+100+25 = 213+125=338
*/

int main()
{
    int n;
    scanf("%d",&n);
    printf("%d\n",find_1(n));
    return 0;
}