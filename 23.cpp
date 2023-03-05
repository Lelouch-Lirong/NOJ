/*
最大乘积
暴力，noj还写什么动态规划
*/
#include<iostream>
//#define MIN -2147483648
using namespace std;
int main()
{
    int input[18];
    int n;
    cin>>n;
    for(int i = 0; i< n; i++){
        cin>>input[i];
    }

    int max_tmp = 1;
    int max = -1;
    for(int i = 0; i < n; i++){
        for(int j = n-1; j >= i ; j--){
            max_tmp = 1;
            for(int k = i; k <= j; k++){
                max_tmp *= input[k];
            }
            if(max_tmp > max)   max = max_tmp;
        }
    }
    if(max > 0) cout<<max<<endl;
    else cout<<-1<<endl;
    return 0;
}