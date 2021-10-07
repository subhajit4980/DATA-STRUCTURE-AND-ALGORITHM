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
Node *insertBegining(Node *head, int x)
{
    Node* temp=new Node(x);
    temp->next=head;
    return temp;
}
//3rd crate a function for print the data of nodes in linkedlist
void printlist(Node*head)
{
    Node*curr=head;
    while (curr!=NULL)
    {
        /* code */
        cout<<curr->data<<" ";
        curr=curr->next;
    }
}
int main() 
{ 
	Node *head=NULL; //initialize head as null
    int data;
	head=insertBegining(head,30);
	head=insertBegining(head,20);
	head=insertBegining(head,10);
    for(int i=0;i<5;i++)
    {
        cin>>data;//INSERT DATA IN THE LINKEDLIST
        head=insertBegining(head,data);
    }
    cout<<"elements in linkedlist are"<<endl;
	printlist(head);
	return 0;
} 