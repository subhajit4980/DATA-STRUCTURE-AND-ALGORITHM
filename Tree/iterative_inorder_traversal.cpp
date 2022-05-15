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
int inorder(Node* root)
{
    stack<Node*>st;
    Node*curr=root;
    while (root!=NULL || st.empty()!=false)
    {
        /* code */
        while (curr!=NULL)
        {
            /* code */
            st.push(curr);
            curr=curr->left;
        }
        curr=st.top();
        st.pop();
        cout<<(curr->key)<<" ";
        curr=curr->right;
        
    }
    
}

int main() {
	
	Node *root=new Node(10);
	root->left=new Node(20);
	root->right=new Node(30);
	root->right->left=new Node(40);
	root->right->right=new Node(50);
    inorder(root);
}