#include<bits/stdc++.h>
using namespace std;
/////Doubly linked list
struct Node{
    int data;
    Node* next;
    Node* prev;
};
////Print the doubly linked list 
void printList(Node* n){
  while(n){
      cout<<n->data<<" ";
      n=n->next;
  }
}
///push in front 
void push(Node** head_ref,int new_data){
    Node  * newNode=new Node();
    newNode->data=new_data;
    newNode->next=*head_ref;
    newNode->prev=NULL;
    if(*head_ref !=NULL){
        (*head_ref)->prev=newNode;
    }
    (*head_ref)=newNode;
}

//insert at middle
void insertAfter (Node* prev_node , int new_data){
    if(prev_node==NULL){
        cout<<"given prev node can't be null"<<endl;
        return;
    }
    Node* newNode=new Node();
    newNode->data=new_data;
    newNode->next=prev_node->next;
    prev_node->next=newNode;
    newNode->prev=prev_node;
    if(newNode->next!=NULL){
        newNode->next->prev=newNode;
    }
}
//inset a node at the end 
void append(Node **head_ref,int new_data){
    Node* new_node=new Node();
    new_node->data=new_data;
 new_node->next=NULL;
 Node* last=*head_ref;//head;
 if(*head_ref==NULL){
     new_node->prev=NULL;
     *head_ref=new_node;
     return;
 }
 while(last->next!=NULL){
     last=last->next;
 }
 last->next=new_node;
 new_node->prev=last;
 return;
 
}
int main(){
    Node* head=NULL;
    push(&head,4);
    push(&head,11);
    push(&head,-11);
    printList(head);
    cout<<endl;
    insertAfter(head->next,10);
    append(&head,9);
    printList(head);
}
