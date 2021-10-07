#include <bits/stdc++.h> 
using namespace std; 

struct Node{
    int data;
    Node* next;
    Node(int x){
        data=x;
        next=NULL;
    }
};

Node *insertEnd(Node *head,int x){
    Node *temp=new Node(x);
    if(head==NULL)return temp;
    Node *curr=head;
    while(curr->next!=NULL){
        curr=curr->next;
    }
    curr->next=temp;
    return head;
    
}

void printlist(Node *head){
        Node *curr=head;
        while(curr!=NULL){
        cout<<curr->data<<" ";
        curr=curr->next;
        }
}
int main() 
{ 
	Node *head=NULL;
	head=insertEnd(head,10);//here once head is initialize after that head cannot be change its always same
	head=insertEnd(head,20);
	head=insertEnd(head,30);
    int data;
    for(int i=0;i<5;i++)
    {
        cin>>data;//INSERT DATA IN THE LINKEDLIST
        head=insertEnd(head,data);
    }
    cout<<"elements in linkedlist are"<<endl;
	printlist(head);
	return 0;
} 
