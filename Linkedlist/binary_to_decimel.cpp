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
    int getDecimalValue(Node* head) {
        if(head==NULL or head->data==0){
            return 0;
        }
        stack<int> s;
        Node* curr=head;
        while(curr){
            s.push(curr->data);
        }
        int sum=0;
        for(int i=0;i<s.size();i++){
            
            sum+=s.top*pow(2,i);
            s.pop;
        }
        return sum;
    }
    int main(){
    Node *head=new Node(1);
    head->next=new Node(0);
    head->next->next=new Node(1);
    head->next->next->next=new Node(0);
    cout<<getDecimalValue(head);
    }