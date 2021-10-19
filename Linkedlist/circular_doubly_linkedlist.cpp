#include <bits/stdc++.h> 
using namespace std; 

struct Node{
    int data;
    Node* next;
    Node* prev;
    Node(int d){
        data=d;
        next=NULL;
        prev=NULL;
    }
};
Node* insertbegin(Node*head,int data)
{
    Node *temp=new Node(data);
    if(head==NULL){
        temp->next=temp;
        temp->prev=temp;
        return temp;
    }
    temp->prev=head->prev;
    temp->next=head;
    head->prev->next=temp;
    head->prev=temp;
    return temp;
}
Node* insertend(Node*head,int data)
{
    Node *temp=new Node(data);
    if(head==NULL){
        temp->next=temp;
        temp->prev=temp;
        return temp;
    }
    temp->prev=head->prev;
    temp->next=head;
    head->prev->next=temp;
    head->prev=temp;
    return head;
}
void print(Node *head)
{
    if(head==NULL)
    {
        return ;
    }
    Node* temp=head;
    do
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    } while (temp!=head);
    
    
}
int main() 
{ 
	Node *head=new Node(10);
	Node *temp1=new Node(20);
	Node *temp2=new Node(30);
	head->next=temp1;
	temp1->next=temp2;
	temp2->next=head;
	temp2->prev=temp1;
	temp1->prev=head;
	head->prev=temp2;
    print(head);
    cout<<"\n";
    head=insertbegin(head,5);
    print(head);
    cout<<"\n";
    head=insertend(head,50);
    print(head);
	return 0;
} 
