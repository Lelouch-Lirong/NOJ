/*
计算二叉树叶子结点数目
*/
#include<iostream>
using namespace std;

struct tree{
    char val;
    struct tree *left, *right;
};

void create(struct tree **t){
    char c;
    c = getchar();
    if(c == '\n' || c == EOF || c == '#'){
        return;
    }else{
        *t = (struct tree*) malloc(sizeof(struct tree));
        (*t)->val = c;
        (*t)->left = (*t)->right = NULL;
        create(&((*t)->left));
        create(&((*t)->right));
    }
    return;
}
int count(struct tree *t){
    if(t == NULL)   return 0;
    else if(t->left == NULL && t->right == NULL) return 1;
    else return count(t->left) + count(t->right);
}
int main()
{
    struct tree *t;
    create(&t);
    cout<<count(t)<<endl;
    return 0;
}