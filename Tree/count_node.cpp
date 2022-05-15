#include<bits/stdc++.h>
using namespace std;
struct Node
{
    /* data */
    int key;
    struct Node *left;
    struct Node*right;
    Node(int k)
    {
        key=k;
        left=right=NULL;
    }
};
int countnode(Node*root)
{
    int lh=0,rh=0;
    Node*curr=root;
    while (curr!=NULL)
    {
        /* code */
        lh++;
        curr=curr->left;
    }
    curr=root;
    while (curr!=NULL)
    {
        /* code */
        rh++;
        curr=curr->right;
    }
    if(lh==rh)
    {
        return pow(2,lh)-1;
    }
    else{
        return 1+countnode(root->left)+countnode(root->right);
    }
}


int main() {
	
	Node *root=new Node(10);
	root->left=new Node(20);
	root->right=new Node(30);
	root->right->left=new Node(40);
	root->right->right=new Node(50);
	cout<<"number of nodes ";
	cout<<countnode(root);
}