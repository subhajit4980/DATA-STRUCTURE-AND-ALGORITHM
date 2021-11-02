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

void detectRemoveLoop(Node* head) 
{ 
    Node *slow = head, *fast = head; 
  
    while (fast!=NULL && fast->next!=NULL) { 
        slow = slow->next; 
        fast = fast->next->next; 
        if (slow == fast) { 
            break; 
        } 
    } 
    if(slow!=fast)
        return;
    slow=head;
    while(slow->next!=fast->next){
        slow=slow->next;
        fast=fast->next;
    }
    fast->next=NULL;
}

int main() 
{ 
	Node *head=new Node(15);
	head->next=new Node(10);
	head->next->next=new Node(12);
	head->next->next->next=new Node(20);
	head->next->next->next->next=head->next;
	detectRemoveLoop(head); 
	return 0;
} 



// algorithm:-
// (distance_slow)X 2=distance_fast

// (A+m(B+C)+b)*2 = A+n(B+C)+B

// A= head to start of loop
// B= start of loop to meeting point of slow and fast
// C= meeting point of slow and fast to start of loop
// m= no of iterate of slow pointer
// n= no of iterate of fast pointer
