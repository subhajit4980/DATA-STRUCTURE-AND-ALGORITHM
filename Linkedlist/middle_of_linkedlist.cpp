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
// void print(Node*head,int n)
// {
//         if(head==NULL)
//         {
//             return;
//         }
//        Node*curr=head;
//         int k=(n/2);        //naive solution
//         for (int i = 0; i <k ; i++)
//         {
//             curr=curr->next;
//         }
//         cout<<curr->data;

// }
void print(Node*head)
{
    if(head==NULL)
        {
            return;
        }
    Node*slow=head;
    Node*fast=head;     //efficient solution
    while (fast!=NULL &&fast->next!=NULL)
    {
        /* code */
        slow=slow->next;
        fast=fast->next->next;
    }
    cout<<slow->data;
    
}
int main() 
{ 
    Node*head=new Node(10);
    head->next=new Node(20);
    head->next->next=new Node(30);
    head->next->next->next=new Node(40);
    head->next->next->next->next=new Node(50);
    int length=getCount(head);
	// print(head,length);
    print(head);
	return 0;
}