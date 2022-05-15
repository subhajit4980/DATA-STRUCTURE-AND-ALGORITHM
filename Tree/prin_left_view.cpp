#include<bits/stdc++.h>
using namespace std;

struct Node  
{ 
  int key; 
  struct Node *left; 
  struct Node *right; 
  Node(int k){
      key=k;
      left=right=NULL;
  }
};
int maxlevel=0;
//recursive solution
void printleft(Node*root,int level)
{
    if(root==NULL)
    {
        return ;
    }
    if(maxlevel<level)
    {
        cout<<(root->key)<<" ";
        maxlevel=level;
    }
    printleft(root->left,level+1);
    printleft(root->right,level+1);
}

// itarative solution
void printleftview(Node*root){
    if(root==NULL)return;
    queue<Node *>q;
    q.push(root);
    while(q.empty()==false){
        int count=q.size();
        for(int i=0;i<count;i++){
        Node *curr=q.front();
        q.pop();
        if(i==0)
        {cout<<curr->key<<" ";}
        if(curr->left!=NULL)
            q.push(curr->left);
        if(curr->right!=NULL)
            q.push(curr->right);
        }
    }
    
}
int main() {
	
	Node *root=new Node(10);
	root->left=new Node(20);
	root->right=new Node(30);
	root->left->left=new Node(40);
	root->left->right=new Node(50);
	root->right->right=new Node(60);
	// printleft(root,1);
    printleftview(root);
}