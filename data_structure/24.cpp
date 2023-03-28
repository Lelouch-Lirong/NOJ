/*
二叉排序树的判别
*/
#include<iostream>
using namespace std;
struct TreeNode{
    int val;
    struct TreeNode *left, *right;
};
class tree{
    public:
        struct TreeNode *root;
        void pre_create(struct TreeNode* &tr);
        tree();
        bool judge(struct TreeNode *tr);
        void pre(struct TreeNode *tr);
};
tree::tree(){
    root = (struct TreeNode*)malloc(sizeof(struct TreeNode));
}
void tree::pre_create(struct TreeNode* &tr){         //根据先序序列创建树
    int c;
    cin>>c;
    if(c != EOF){
        if(c == -1){
            tr = NULL;
            //tr->left = tr->right = NULL;
            return;
        }
        tr = (struct TreeNode*)malloc(sizeof(struct TreeNode));
        tr->val = c;
        tr->left = tr->right = NULL;
        // tr->left = (struct TreeNode*)malloc(sizeof(struct TreeNode));
        // tr->right = (struct TreeNode*)malloc(sizeof(struct TreeNode));
        pre_create(tr->left);
        pre_create(tr->right);
    }
}
//判断是否是二叉排序树
bool tree::judge(struct TreeNode *tr){
    if(tr == NULL)  return true;

    struct TreeNode *tmp = tr->left;
    //左子树最大的结点
    while(tmp != NULL && tmp->right != NULL){
        tmp = tmp->right;
    }
    if(tmp != NULL && tmp->val > tr->val)    return false;

    //右子树最小的结点
    tmp = tr->right;
    while(tmp != NULL && tmp->left != NULL){
        tmp = tmp->left;
    }
    if(tmp != NULL && tmp->val < tr->val)    return false;

    return judge(tr->left)&&judge(tr->right);
}

void tree::pre(struct TreeNode *tr){
    if(tr){
        cout<<tr->val<<" ";
        pre(tr->left);
        pre(tr->right);
    }
}
int main()
{
    tree T;
    T.pre_create(T.root);
    T.judge(T.root)? cout<<"yes"<<endl : cout<<"no"<<endl;
    //T.pre(T.root);
    return 0;
}

