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
int balanced(Node*root)
{
    if(root==NULL){
        return 0;
    }
    int lh=balanced(root->left);
    if(lh==-1){
        return -1;
    }
    int rh=balanced(root->right);
    if(rh==-1){
        return -1;
    }
    if(lh-rh>1){
        return -1;
    }
    return max(lh,rh)+1;
}
int main() {
	Node *root=new Node(8);
	root->left=new Node(12);
    root->left->right=new Node(13);
    root->left->left=new Node(14);
	root->right=new Node(15);
	root->right->left=new Node(16);
	root->right->right=new Node(17);
    if(balanced(root)){
        cout<<"yes balanced"<<endl;
    }else{
        cout<<"not balanced"<<endl;
    }
    return 0;
}