#include <bits/stdc++.h> 
using namespace std; 

struct Node{
    int data;
    Node* next;
    Node(int d){
        data=d;
        next=NULL;
    }
};
void print(Node *head)
{
    if(head==NULL)
    {
        return ;
    }
//for loop method

    // cout<<head->data<<" ";
    // for (Node*i =head->next; i!=head; i=i->next)
    // {
    //     /* code */
    //     cout<<i->data<<" ";
    // }


    //do while method

    Node* temp=head;
    do
    {
        /* code */
        cout<<temp->data<<" ";
        temp=temp->next;
    } while (temp!=head);
    
    
}
int main() 
{ 
	Node *head=new Node(10);
	head->next=new Node(5);
	head->next->next=new Node(20);
	head->next->next->next=new Node(15);
	head->next->next->next->next=head;
    print(head);
	return 0;
} 
