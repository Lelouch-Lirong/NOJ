/*
输出二叉树表示的算术表达式
实质上是将先序序列变为中序序列
*/
#include<iostream>
using namespace std;
struct TreeNode{
    char val;
    struct TreeNode *left, *right;
};
class tree{
    public:
        struct TreeNode *root;
        void pre_create(struct TreeNode *tr);
        void in_output(struct TreeNode *tr);
        tree();
};
tree::tree(){
    root = (struct TreeNode*)malloc(sizeof(struct TreeNode));
}
void tree::pre_create(struct TreeNode *tr){         //根据先序序列创建树
    char c = getchar();
    if(c != EOF && c != '\n'){
        tr->val = c;
        if(c == '#'){
            tr->left = tr->right = NULL;
            return;
        }
        tr->left = (struct TreeNode*)malloc(sizeof(struct TreeNode));
        tr->right = (struct TreeNode*)malloc(sizeof(struct TreeNode));
        pre_create(tr->left);
        pre_create(tr->right);
    }
}
void tree::in_output(struct TreeNode *tr){           //输出中序序列
    if(tr == NULL)  return;
    if(tr->val == '#')  return;
    in_output(tr->left);
    cout<<tr->val;
    in_output(tr->right);
}

int main()
{
    tree T;
    T.pre_create(T.root);
    T.in_output(T.root);
    cout<<endl;
    return 0;
}
