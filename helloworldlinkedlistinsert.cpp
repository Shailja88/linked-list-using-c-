#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node* next;
};
void printList(Node* h){
    while(h){
        if(h->next==NULL)
        cout<<h->data<<endl;
        else
        cout<<h->data<<"->";
        h=h->next;
        
    }
}
void insertAtHead(Node** head, int data){
        Node* newHead=new Node();
        newHead->data=data;
        newHead->next=*head;
        *head=newHead;
   
    }
    //insert at particular position 
void insertAfter(Node *prev_node,int data){
    Node* newNode=new Node();
    newNode->data=data;
    newNode->next=prev_node->next;
    prev_node->next=newNode;
    
}
void insertAtEnd(Node ** head_ref,int newData){
    Node * newNode=new Node();
    newNode->data=newData;
    newNode->next=NULL;
    Node *last=*head_ref;
    if(*head_ref==NULL){
        *head_ref=newNode;
        return;
    }
    while(last->next!=NULL){
        last=last->next;
    }
    last->next=newNode;
    return;
}
int main(){
  Node* head=NULL;
  for(int i=1;i<=10;i++ ){
      cout<<"give me one element "<<endl;
      int x;
      cin>>x;
 insertAtHead(&head,x);
  }
  insertAfter(head->next->next,1000000);
  printList(head);
  insertAtEnd(&head,100);
  printList(head);
}
