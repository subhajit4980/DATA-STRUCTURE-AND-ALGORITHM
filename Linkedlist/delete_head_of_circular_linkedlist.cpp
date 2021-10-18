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

void printlist(Node *head){
    if(head==NULL)return;
    Node *p=head;
    do{
        cout<<p->data<<" ";
        p=p->next;
    }while(p!=head);
}

Node *delHead(Node *head){
    // if(head==NULL)return NULL;
    // if(head->next==head){
    //     delete head;
    //     return NULL;
    // }
    // Node *curr=head;
    // while(curr->next!=head)    //naive solution  O(n)
    //     curr=curr->next;
    // curr->next=head->next;
    // delete head;
    // return (curr->next);

        if(head==NULL)return NULL;
    if(head->next==head){
        delete head;
        return NULL;
    }
    head->data=head->next->data;        //efficient solution O(1)
    Node *temp=head->next;
    head->next=head->next->next;
    delete temp;
    return head;
}

int main() 
{ 
	Node *head=new Node(10);
	head->next=new Node(20);
	head->next->next=new Node(30);
	head->next->next->next=new Node(40);
	head->next->next->next->next=head;
	head=delHead(head);
	printlist(head);
	return 0;
} 
