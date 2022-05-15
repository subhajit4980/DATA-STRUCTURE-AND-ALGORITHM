#include <bits/stdc++.h>
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
;
 Node* doubly(Node*root)
 {
     static Node* prev = NULL;
     if(root==NULL)
     {
         return root;
     }
     Node* head=doubly(root->left);
    if(prev==NULL){
        head=root;
    }else{
        root->left=prev;
        prev->right=root;
    }
    prev=root;
    doubly(root->right);
    return head;
 }  
 void printlist(Node *head){
    Node *curr=head;
    while(curr!=NULL){
        cout<<curr->key<<" ";
        curr=curr->right;
    }cout<<endl;
}

int main() {
	
	Node *root=new Node(10);
	root->left=new Node(20);
	root->right=new Node(30);
	root->left->left=new Node(40);
	root->left->right=new Node(50);
	root->right->left=new Node(60);
	root->right->right=new Node(70);
	Node* head=doubly(root);
	printlist(head);
}