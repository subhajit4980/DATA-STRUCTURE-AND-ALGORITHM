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
int getCount(Node* head)
{
    // Base Case
    if (head == NULL) {
        return 0;
    }
    // Count this node plus the rest of the list
    else {
        return 1 + getCount(head->next);
    }
}
void printlist(Node *head){
    Node *curr=head;
    while(curr!=NULL){
        cout<<curr->data<<" ";
        curr=curr->next;
    }cout<<endl;
}

void printNthFromEnd1(Node * head,int n){
    if(head==NULL)return;
    Node *first=head;
    for(int i=0;i<n;i++){
        if(first==NULL)return;
        first=first->next;
    }
    Node *second=head;
    while(first!=NULL){
        second=second->next;
        first=first->next;
    }
    cout<<(second->data);
}
void printNthFromEnd(Node*head,int n,int pos)
{
        if(head==NULL)
        {
            return;
        }
       Node*curr=head;
        int k=(n-pos);        //naive solution
        for (int i = 0; i <k ; i++)
        {
            curr=curr->next;
        }
        cout<<curr->data;

}

int main() 
{ 
    Node*head=new Node(10);
    head->next=new Node(20);
    head->next->next=new Node(30);
    head->next->next->next=new Node(40);
    head->next->next->next->next=new Node(50);
    int length=getCount(head);
    printlist(head);
	printNthFromEnd(head,length,4);
    cout<<"\n";
    printNthFromEnd1(head,2);
	return 0;
}