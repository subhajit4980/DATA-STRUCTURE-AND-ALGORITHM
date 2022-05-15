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
int preorder(Node* root)
{
       if (root == NULL)
        return 0;
    stack<Node*>st;
    Node*curr=root;
    while (st.empty()==false || curr!=NULL)
    {
        while (curr!=NULL)
        {
            /* code */
            cout<<curr->key<<" ";
            if(curr->right)
            {
                st.push(curr->right);
            }
            curr=curr->left;
        }
        if(st.empty()==false)
        {
            curr=st.top();
            st.pop();
        }
    }
    
}

int main() {
	
	Node *root=new Node(10);
	root->left=new Node(20);
	root->right=new Node(30);
	root->right->left=new Node(60);
	root->left->right=new Node(50);
    root->left->left=new Node(40);
    root->left->left->left=new Node(70);
    root->left->left->right=new Node(80);
    preorder(root);
}