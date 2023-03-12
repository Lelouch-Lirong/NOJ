/*
边缘和内芯之差
*/
#include<iostream>
using namespace std;
int function(int n, int m, int **a){
    int s1 = 0;
    int s2 = 0;
    for(int i = 0; i < n; i++){
        if(i == 0 || i == n-1){
            for(int j = 0; j < m; j ++){
                s1 += a[i][j];
            }
        }else{
            s1 += a[i][0] + a[i][m-1];
            for(int j = 1; j < m-1; j++){
                s2 += a[i][j];
            }
        }
    }
    return s1 - s2;
}
int main()
{
    int n, m;
    cin>>n>>m;
    int **a = (int **)malloc(sizeof(int*)*n);
    for(int i = 0; i < n; i++){
        a[i] = (int*)malloc(sizeof(int)*m);
        for(int j = 0; j < m; j++){
            cin>>a[i][j];
        }
    }
    cout<<function(n, m, a)<<endl;
    return 0;
}