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
node *searchINBST(node *root, int key)
{
    if (root == NULL)
    {
        return NULL;
    }
    if (root->data > key)
    {
        return searchINBST(root->left, key);
    }
    return searchINBST(root->right, key);
}
int main()
{
    // if ( searchINBST(root,5)
    //     {
    //         cout << "key doesnot exist";
    //     } 
    //     else
    //      {
    //         cout << "key exist";
    //     }

    struct node *root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);
    searchINBST(root,3);
    if(ans){
        cout<<"yes";
    }
    cout<<"no";
    

    return 0;
}