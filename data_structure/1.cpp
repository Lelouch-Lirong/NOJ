/*
//顺序表的插入运算
*/
#include<iostream>
#define MAX_LEN 1001
using namespace std;

class list{
    private:
        int data[MAX_LEN];
        int num;
    public:
        list();
        bool insert(int x);
        int find(int a);
        void output();
};
list::list(){
    cin>>this->num;
    for(int i = 0 ; i < this->num; i++){
        cin>>this->data[i];
    }
}
int list::find(int a){
    for(int i = 0; i < this->num; i++){
        if(a <= this->data[i])   return i;
    }
    return this->num;
}
bool list::insert(int x){
    int loca = this->find(x);
    //cout<<loca<<endl;
    for(int i = num; i > loca; i--){
        this->data[i] = this->data[i-1];
    }
    this->data[loca] = x;
    this->num++;
    if(this->num > MAX_LEN) return false;
    else return true;
}
void list::output(){
    for(int i = 0; i < this->num; i++) cout<<this->data[i]<<" ";
    cout<<endl;
    return;
}
int main()
{
    list L;
    int x;
    cin>>x;
    L.insert(x);
    L.output();
    return 0;
}