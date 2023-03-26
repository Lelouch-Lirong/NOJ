/*
表达式括号匹配
*/
#include<iostream>
#define MAX_LEN 10001
using namespace std;

class stack{
    private:
        char st[MAX_LEN];
        int point;
    public:
        void func();
        bool push(char c);
        bool pop(char *buf);
        stack();
};
void stack::func(){
    char c;
    char buf;
    //EOF noj能过，'\n'noj会显示超时
    while((c = getchar()) != EOF){
        switch(c){
            case '(':
            case '[':
            case '{':
                this->push(c);
                break;
            case ')':
                if(!this->pop(&buf) || buf+1 != c){
                    cout<<"no"<<endl;
                    return;
                }
                break;
            case ']':
                if(!this->pop(&buf) || buf+2 != c){
                    cout<<"no"<<endl;
                    return;
                }
                break;
            case '}':
                if(!this->pop(&buf) || buf+2 != c){
                    cout<<"no"<<endl;
                    return;
                }
                break;
            default:
                break;
        }
    }
    if(this->point == -1)    cout<<"yes"<<endl;
    else cout<<"no"<<endl;
    return;
}
stack::stack(){
    this->point = -1;
}
bool stack::pop(char *buf){
    if(this->point < 0) return false;
    *buf = this->st[this->point];
    this->point--;
    return true;
}
bool stack::push(char c){
    if(this->point +1 >MAX_LEN) return false;
    
    this->point++;
    this->st[this->point] = c;
    return true;
}

int main()
{
    stack ST;
    ST.func();
    return 0;
}