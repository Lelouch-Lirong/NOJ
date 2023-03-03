/*
输入为n;
（n^3 / n） 即为连续n个奇数的平均值,计算出这个数即可
*/
#include<iostream>
#include<cmath>
using namespace std;
class solution{
    private:    
        int num;
    public:
        solution(int);
        void output();
};
solution::solution(int n){
    this->num = n;
}
void solution::output(){
    int sum = pow(this->num, 3);
    int n = sum / this->num;
    cout<<this->num<<'*'<<this->num<<'*'<<this->num<<'='<<sum<<'=';

    if(this->num % 2 == 1){     //所给数为奇数
        for(int i = n - (this->num/2)*2; i < n + (this->num/2)*2 ; i += 2){
            cout<<i<<'+';
        }
        cout << n + (this->num/2)*2 << endl;
    }else{                      //为偶数
        int left, right;
        left = n-1 - ((this->num)/2-1)*2;
        right = n+1 + ((this->num)/2-1)*2;
        for(int i = left; i < right ; i+=2){
            cout<<i<<'+';
        }
        cout<<right<<endl;
    }
}
 // 13  15  17 19
int main()
{
    int num;
    cin >> num;
    solution s(num);
    s.output();
    return 0;
}