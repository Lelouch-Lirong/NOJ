/*
建立二叉树的二叉链表存储结构
*/
#include<iostream>
#include <vector>
using namespace std;

struct tree{
    char val;
    struct tree *left, *right;
};
class stack{
    public :
        struct tree* st[100];
        int point;
        struct tree* pop();
        struct tree* push(struct tree *t);
        stack();
};
struct tree* stack::pop(){
    return st[point--];
}
stack::stack(){
    point = -1;
}

struct tree* stack::push(struct tree *t){
    st[++point] = t;
    return t;
}

stack tree_stack;
void create(struct tree *root){
    char c;
    struct tree *t;
    tree_stack.push(root);
    while((c = getchar()) != '\n' && c != EOF){
        if(c >= 'A' && c <= 'Z' || c == '#'){
            t = tree_stack.pop();
            t->val = c;
            
        }else if(c == '('){
            t->left = (struct tree*)malloc(sizeof(struct tree));
            t->right = (struct tree*)malloc(sizeof(struct tree));
            tree_stack.push(t->right);
            tree_stack.push(t->left);
        }else if(c == ',' || c == ')'){
            continue;
        }
    }
}
void pre_output(struct tree *t){
    if(t == NULL)   return;
    cout<<t->val;
    if(t->val == '#')   return;
    pre_output(t->left);
    pre_output(t->right);
    return;
}
int main()
{
    struct tree *t = (struct tree*)malloc(sizeof(struct tree));
    create(t);
    pre_output(t);
    cout<<endl;
    return 0;
}