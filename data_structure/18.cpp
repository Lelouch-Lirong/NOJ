/*
根据前序序列和中序序列输出后序序列
*/
#include<iostream>
using namespace std;

struct Node {
    char val;
    struct Node *left, *right;
};
int point = 0;
struct Node* create(char *pre ,char *order, int len){
    if(len <=0) return NULL;
    struct Node *tree = (struct Node*)malloc(sizeof(struct Node));
    tree->val = pre[point];
    int i;
    for(i = 0; i < len; i++){
        if(pre[point] == order[i])  break;
    }
    // tree->left = (struct Node*)malloc(sizeof(struct Node));
    // tree->right = (struct Node*)malloc(sizeof(struct Node));
    point++;
    tree->left = create(pre, order, i);
    tree->right = create(pre, order+i+1, len-i-1);
    return tree;
}
void output(struct Node *tree){
    if(tree != NULL){
        output(tree->left);
        output(tree->right);
        cout<<tree->val;
    }
}

int main()
{
    char pre[100], order[100];
    cin>>pre>>order;
    //scanf("%s\n%s", pre, order);
    struct Node *tree;
    int len = 0;
    for(; order[len] != '\0'; len++);
    //cout<<len<<endl;
    tree = create(pre, order, len);
    output(tree);
    cout<<endl;
    return 0;
}