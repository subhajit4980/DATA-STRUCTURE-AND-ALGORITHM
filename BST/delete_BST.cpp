#include <bits/stdc++.h>
using namespace std;

struct Node
{
    /* data */
    int key;
    struct Node*left;
    struct Node*right;
    Node(int k)
    {
        key=k;
        left=right=NULL;
    }
};
Node*successer(Node*curr)
{
    curr=curr->right;
    while (curr!=NULL && curr->left!=NULL)
    {
        /* code */
        curr=curr->left;
    }
    return curr;
}
Node* del(Node*root,int x)
{
    if(root==NULL)
        return 0;
    if(root->key<x)
    {
        root->right=del(root->right,x);
    }
    else if (root->key>x)
    {
        /* code */
        root->left=del(root->left,x);
    }
    else{
        if(root->right==NULL)
        {
            Node*temp=root->left;
            delete root;
            return temp;
        }
        else if (root->left==NULL)
        {
            /* code */
            Node*temp=root->right;
            delete root;
            return temp;
        }
        else{
            Node*succ=successer(root);
            root->key=succ->key;
            root->right=del(root->right,succ->key);
        }
        
    }
    
    
}
void print(Node*root)
{
    if (root!=NULL)
    {
        /* code */
        print(root->left);
        cout<<root->key<<" ";
        print(root->right);
    }
    
}
int main() {
	
	Node *root=new Node(10);
	root->left=new Node(5);
	root->right=new Node(15);
	root->right->left=new Node(12);
	root->right->right=new Node(18);
	int x=15;
	
	root=del(root,x);
	print(root);
}