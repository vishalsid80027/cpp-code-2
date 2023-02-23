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
void inorder(struct node *root)  // inorder always give sorted tree.
{
    if (root == NULL)
    {
        return;
    }
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}
node* constructBST(node*root,int val){
    if(root==NULL){     // base condition
        return new node(val);
    }
    if(val<root->data){
        root->left=constructBST(root->left,val);   // recursive call
    }
    else{
        root->right=constructBST(root->right,val);
    }
    return root;
}
int main()
{
    // construct binary tree
    node*root=NULL;
    root=constructBST(root,27);
    root=constructBST(root,407);
    root=constructBST(root,88);
    root=constructBST(root,230);
    root=constructBST(root,50);
    root=constructBST(root,7);
    root=constructBST(root,79);
    root=constructBST(root,90);
    root=constructBST(root,22);
    root=constructBST(root,5);
    root=constructBST(root,500);
     inorder(root);
     cout<<endl;
    
    return 0;
}