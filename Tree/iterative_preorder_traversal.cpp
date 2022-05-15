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
    stack<Node*>st;
    st.push(root);
    while (st.empty()==false)
    {
        Node*curr=st.top();
        cout<<curr->key<<" ";
        st.pop();
        if(curr->left!=NULL) st.push(curr->left);
        if(curr->right!=NULL) st.push(curr->right);
        
    }
    
}

int main() {
	
	Node *root=new Node(10);
	root->left=new Node(20);
	root->right=new Node(30);
	root->right->left=new Node(40);
	root->right->right=new Node(50);
    preorder(root);
}