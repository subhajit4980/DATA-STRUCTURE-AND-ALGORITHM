#include <bits/stdc++.h>
using namespace std;

struct Node
{
    /* data */
    int key;
    int lcount;
    struct Node*left;
    struct Node*right;
    Node(int k)
    {
        lcount=0;
        key=k;
        left=right=NULL;
    }
};
bool isBST(Node*root,int min, int max)
{
    if(root==NULL)
    {
        return true;
    }
    return(root->key>min && root->key<max && isBST(root->left,min,root->key) && isBST(root->right,root->key,max));
}

int prevv=INT_MIN;
bool is_BST(Node* root)  
{  
    if (root == NULL)  
        return true;  
    
    if(is_BST(root->left)==false)
        {return false;}
    
    if(root->key<=prevv)
    {return false;}
    prevv=root->key;
    
    return is_BST(root->right);
}

int main() {
	Node *root=new Node(15);
	root->left=new Node(5);
	root->left->left=new Node(3);
	root->right=new Node(20);
	root->right->left=new Node(18);
	root->right->left->left=new Node(16);
	root->right->right=new Node(80);
    if(isBST(root,INT_MIN,INT_MAX))
        cout<<"BST\n";
    else
        cout<<"not BST\n";
    if(is_BST(root))
        cout<<"BST";
    else
        cout<<"not BST";
    return 0;
}