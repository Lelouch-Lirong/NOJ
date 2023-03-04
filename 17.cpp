/*
多项式的猜想
*/
#include<iostream>
#define MAX_LEN 500
using namespace std;
/*可以递归，但开销大些*/
int get_A(int n){
    if(n == 1 || n == 2)    return 1;
    else    return get_A(n-2)+2*get_A(n-1);
}
//1 1 3 7 17 41 99
/*
可以用数组存储起来
*/
// int A[MAX_LEN];
// int get_A(int n){
//     if(A[n] != 0)   return A[n];
//     if(n == 1 || n ==2){
//         A[n] = 1;
//         return 1;
//     }else{
//         A[n] = A[n-2] + 2*A[n-1];
//         return A[n];
//     }
// }

int main()
{
    bool flag1 = true;
    bool flag2 = true;
    bool flag3 = true;
    int sum = 0;
    for(int i = 1; flag1||flag2||flag3; i++){
        sum += get_A(i);
        if(flag1 && sum >= 100){
            flag1 = false;
            cout << i-1<< endl;
        }
        if(flag2 && sum >= 1000){
            flag2 = false;
            cout << i-1<< endl;
        }
        if(flag3 && sum >= 10000){
            flag3 = false;
            cout << i-1<< endl;
        }
    }
    return 0;
}
