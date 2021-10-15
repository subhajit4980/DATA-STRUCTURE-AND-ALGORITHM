#include<bits/stdc++.h>
using namespace std;
struct Node
{
    /* data */
    int data;
    Node* next;
    Node* prev;
    Node(int x)
    {
        data=x;
        next=NULL;
        prev=NULL;
    }
};

void print(Node *head){
    Node *curr=head;
    while(curr!=NULL){
        cout<<curr->data<<" ";
        curr=curr->next;
    }cout<<endl;
}
Node* delete_last(Node*head)
{
    if(head==NULL)
    {
        return NULL;
    }
    if(head->next==NULL)
    {
        delete head;
        return NULL;
    }
    Node* curr=head;
    while (curr->next!=NULL)
    {
        /* code */
        curr=curr->next;
    }
    curr->prev->next=NULL;
    delete curr;
    return head;
}
int main() 
{ 
	Node *head=new Node(10);
	Node *temp1=new Node(20);
	Node *temp2=new Node(30);
	head->next=temp1;
	temp1->prev=head;
	temp1->next=temp2;
	temp2->prev=temp1;
	head=delete_last(head);
	print(head);
	return 0;
}
