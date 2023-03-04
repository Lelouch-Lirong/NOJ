/*
区间内素数
500~800
*/
#include<iostream>
#include<cmath>
#define MAX_LEN 50
using namespace std;

class prime{
    private:
        int prime_nums[MAX_LEN];
        int cnt;
    public:
        int get_cnt();
        int get_sum();
        prime(int left, int right);
        bool is_prime(int num);
};
bool prime::is_prime(int num){
    if(num < 2) return false;       //其实应该抛出错误
    for(int i = 2; i < num; i++){
        if(num%i == 0)  return false;
    }
    return true;
}
prime::prime(int left, int right){
    cnt = 0;
    for(int i = left; i <= right && cnt < MAX_LEN; i++){
        if(is_prime(i)){
            prime_nums[cnt++] = i;
        }
    }
}
int prime::get_cnt(){
    return this->cnt;
}
/*
素数从大到小排序，大1-大2+大3-大4....sum必为正
*/
int prime::get_sum(){
    int sum = 0;
    for(int i = cnt-1; i >= 0; i--){
        sum += prime_nums[i]*pow(-1, i);
    }
    return abs(sum);
}

int main()
{
    prime p(500, 800);
    cout<<p.get_cnt()<<" "<<p.get_sum();
    return 0;
}