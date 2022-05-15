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

Node* insert(Node*root,int x)
{
    Node*parent=NULL;
    Node*temp=new Node(x);
    Node*curr=root;
    while(curr!=NULL)
    {
        parent=curr;
        if(curr->key>x)
        {
            curr=curr->left;
        }
        else if(curr->key<x)
        {
            curr=curr->right;
        }
        else{
            return root;
        }
    }
    if (parent==NULL)
    {
        return temp;
    }
    if (parent->key>x)
    {
        /* code */
        parent->left=temp;
    }
    else{
        parent->right=temp;
    }
    return root;
    
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
	int x=16;
	
	root=insert(root,x);
	print(root);
}