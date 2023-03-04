/*
乒乓球比赛
大脑计算然后直接cout答案即可
int main()
{
    cout<<"A=Z"<<endl
        <<"B=X"<<endl
        <<"C=Y"<<endl;
    return 0;
}
*/
#include<iostream>
using namespace std;

// enum yi{
//     X = 1, 
//     Y = 2, 
//     Z = 3
// };

char getback(int n){
    switch(n){
        case 1:
            return 'X';
        case 2:
            return 'Y';
        case 3:
            return 'Z';
        default:
            return 'E'; //error
    }
}
int main()
{
    int A, B, C;
    for(A = 1; A < 4; A++){
        if(A == 1)  continue;
        for(B = 1; B < 4; B++){
            if(B == A)  continue;
            for(C = 1; C < 4; C++){
                if(C == A|| C == B|| C == 1|| C == 3) continue;
                cout<<"A="<<getback(A)<<endl;
                cout<<"B="<<getback(B)<<endl;
                cout<<"C="<<getback(C)<<endl;
            }
        }
    }
    return 0;
}