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

void printlist(Node *head){
    Node *curr=head;
    while(curr!=NULL){
        cout<<curr->data<<" ";
        curr=curr->next;
    }cout<<endl;
}
Node* swapPairs(Node* head) {
        if (!head || !(head -> next)) return head;
        Node* new_head = new Node(0);
        new_head -> next = head;
        Node* pre = new_head; 
        Node* cur = head;
        while (pre -> next && cur -> next) {
            pre -> next = cur -> next;
            cur -> next = cur -> next -> next;
            pre -> next -> next = cur;
            pre = cur;
            cur = pre -> next;
        }
        return new_head -> next;
    }

    int main()
    {
    Node* head = new Node(10); 
    head->next = new Node(5); 
    head->next->next = new Node(20); 
    head->next->next->next = new Node(15); 
    head->next->next->next->next = new Node(20);
    printlist(head);
    head = swapPairs(head);
    printlist(head); 
    return 0;
    }