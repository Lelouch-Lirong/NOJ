
#include<iostream>
#include<cstdio>
using namespace std;


void quicksort(int *data, int left, int right){

    if(left >= right)   return;

    int i = left;
    int j = right;
    int key = data[left];
    int tmp;

    while(i < j){
        while(i < j && data[j] >= key)  j--;
        while(i < j && data[i] <= key)  i++;
        tmp = data[j];
        data[j] = data[i];
        data[i] = tmp;
    }
    tmp = data[j];
    data[j] = data[left];
    data[left] = tmp;

    quicksort(data, left, i-1);
    quicksort(data, i+1, right);
    return;
}

int main()
{
    int n;
    cin>>n;
    int data[100];
    int left, right;
    char tmp;
    while(n--){
        left = right = 0;
        do{
            scanf("%d", data+right);
            right ++;
        }while((tmp = getchar()) != '\n');
        quicksort(data, left, right-1);
        for(int i = 0; i < right; i++)  printf("%d ", data[i]);
        printf("\n");
    }
    return 0;
}
