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
Node* insertend(Node*head,int data)
// {
//     Node*temp=new Node(data);
//     if(head==NULL)
//     {
//         temp->next=temp;
//         return temp;
//     }
//     else{
//         Node*curr=head;         //naive solution ,time complexity O(n)
//         while (curr->next!=head)
//         {
//             /* code */
//             curr=curr->next;
//         }
//         curr->next=temp;
//         temp->next=head;
//         return head;
        
//     }
// }
{
        Node*temp=new Node(data);
    if(head==NULL)
    {
        temp->next=temp;
        return temp;
    }
    else{
        temp->next=head->next;  //efficient solution time complexity O(1)
        head->next=temp;
        int swap=head->data;
        head->data=temp->data;
        temp->data=swap;
            return temp;
    }

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
	head->next=new Node(5);
	head->next->next=new Node(20);
	head->next->next->next=new Node(15);
	head->next->next->next->next=head;
    print(head);
    cout<<"\n";
     head=insertend(head,89);
    print(head);
	return 0;
} 
