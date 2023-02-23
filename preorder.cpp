#include <iostream>
using namespace std;
struct node
{
    int data;
    struct node *left;
    struct node *right;
    node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};
void preorder(struct node*root){
    if(root==NULL){
        return ;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}
int main()
{
    struct node *root = new node(10);
    root->left = new node(30);
    root->right = new node(20);
    root->left->left = new node(40);
    root->left->right = new node(50);
    root->right->left=new node(70);
    root->right->right=new node(60);
    preorder(root);
    return 0;
}