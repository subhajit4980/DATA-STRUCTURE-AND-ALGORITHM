#include <bits/stdc++.h>
using namespace std;

//1st create a struct node for linkedlist
struct Node
{
    int data;
    Node *next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};
//2nd create a function for inserting node in linkedlist
Node *insertsort(Node *head, int x)
{
    Node* temp=new Node(x);
    if(head==NULL)
    {
        return temp;
    }
    if(x<head->data)
    {
        temp->next=head;
        return temp;
    }
    Node*curr=head;
    while (curr->next!=NULL && curr->next->data<x)
    {
        /* code */
        curr=curr->next;
    }
    temp->next=curr->next;
    curr->next=temp;
    return head;
    
}
//3rd crate a function for print the data of nodes in linkedlist
void printlist(Node*head)
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
    Node*head=new Node(10);
    head->next=new Node(20);
    head->next->next=new Node(30);
    head->next->next->next=new Node(40);
    head->next->next->next->next=new Node(50);
	head=insertsort(head,35);
	printlist(head);
	return 0;
} 