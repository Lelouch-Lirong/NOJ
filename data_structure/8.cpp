/*
逆波兰式
设置两个栈，一个符号栈，一个变量栈
*/
#include<iostream>
#define MAX_LEN 10001
using namespace std;
class stack{
    private:
        char st[MAX_LEN];
    public:
        int point;
        bool push(char c);
        bool pop(char *buf);
        bool get(char *buf);
        stack();
};
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
bool stack::get(char *buf){
    if(this->point < 0) return false;
    *buf = this->st[this->point];
    return true;
}

void func(){
    stack op;
    //stack pra;
    char c;
    char buf;
    //EOF noj能过，'\n'noj会显示超时
    while((c = getchar()) != EOF && c != '\n'){
        switch(c){
            case '(':
            case '*':
            case '/':
                op.push(c);
                break;
            case '+':
            case '-':
                while(op.get(&buf) && (buf == '*' || buf == '/')){
                    op.pop(&buf);
                    cout<<buf;
                }
                op.push(c);
                break;
            case ')':
                while(op.get(&buf) && buf != '(' ){
                    op.pop(&buf);
                    cout<<buf;
                }
                op.pop(&buf);
                break;
            default:        //变量
                cout<<c;
                break;
        }
    }
    while(op.point != -1){
        op.pop(&buf);
        cout<<buf;
    }
    cout<<endl;
    return;
}

int main()
{
    func();
    return 0;
}