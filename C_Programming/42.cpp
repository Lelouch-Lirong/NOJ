/*
//  二分查找
*/
#include<iostream>
using namespace std;

int BinarySearch(int left, int right, int* addr, int num){
    int mid = (right + left) / 2;
    if(addr[mid] == num)    return mid;
    else if(left == right || left == right - 1)  return -1;
    else if(addr[mid] > num)    return BinarySearch(left, mid, addr, num);
    else    return BinarySearch(mid, right, addr, num);
}

int main()
{
    int n;
    int addr[101];
    int num;
    cin>>n;
    for(int i = 0; i < n; i++)  cin>>addr[i];
    cin>>num;
    if((num = BinarySearch(0, n, addr, num)) < 0){
        cout<<"null"<<endl;
    }else   cout<<num<<endl;
    return 0;
}