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

Node* detectcycle(Node* head) 
{ 
    Node *slow_p = head, *fast_p = head; 
  
    while (fast_p!=NULL && fast_p->next!=NULL) { 
        slow_p = slow_p->next; 
        fast_p = fast_p->next->next; 
        if (slow_p == fast_p) { 
            return slow_p; 
        } 
    } 
    return NULL; 
}

Node* detectfirstNode(Node*head)
{
    Node* meet=detectcycle(head);
    Node* start=head;
    while (start!=meet)
    {
        /* code */
        start=start->next;
        meet=meet->next;
    }
    cout<<"loop start from "<<start->data<<endl;
    
}

int main() 
{ 
	Node *head=new Node(15);
	head->next=new Node(10);
	head->next->next=new Node(12);
	head->next->next->next=new Node(20);
	head->next->next->next->next=head->next->next;
    detectfirstNode(head);
	return 0;
} 


//                                                           algorithm:-
// (distance_slow)X 2=distance_fast

// (A+m(B+C)+b)*2 = A+n(B+C)+B
// where ,
// A= head to start of loop
// B= start of loop to meeting point of slow and fast
// C= meeting point of slow and fast to start of loop
// m= no of iterate of slow pointer
// n= no of iterate of fast pointer