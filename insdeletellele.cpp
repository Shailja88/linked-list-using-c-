#include<bits/stdc++.h>
using namespace std;
class Node{
  public:
  int data;
  Node* next;
  Node(int data){
      this->data=data;
      this->next=NULL;
  }
  ~Node(){
      int value=this->data;
      //memory free
      if(this->next!=NULL){
          delete next;
          this->next=NULL;
      }
      cout<<"Memory is free for node with data "<<value<<endl;
  }
};
void insertAtTail(Node* &tail,int d){
    //new node create;
    Node* temp=new Node(d);
tail->next=temp;
tail=temp; 
 
}
void insertAtHead(Node* &head,int d){
    Node* temp=new Node(d);
    temp->next=head;
      head=temp;
}
void insertAtPosition(Node* &tail,Node* &head,int  position,int d){
    //insert At Start
    if(position==1){
        insertAtHead(head,d);
        return;
    }
    Node* temp=head;
    int cnt=1;
    while(cnt<position-1){
        temp=temp->next;
        cnt++;
    }
    //insertingat last position
    if(temp->next==NULL){
        insertAtTail(tail,d);
        return;
    }
    //creating  a node for d
    Node* nodeToinsert=new Node(d);
    nodeToinsert->next=temp->next;
    temp->next=nodeToinsert;
}

void print(Node* &head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
void deleteNode(int position, Node* &head,Node* &tail){
    //deleting first node 
    if(position==1){
        Node* temp=head;
        head=head->next;
        //memory free
        temp->next=NULL;
        delete temp;
    }
    //deleting any middle node or last node 
    else{
          Node* curr=head;
          Node* prev=NULL;
          int cnt=1;
         
          while(cnt<position){
              prev=curr;
              curr=curr->next;
              cnt++;
          }
            if(curr->next == NULL){
            tail=prev;
        }
          prev->next=curr->next;
          curr->next=NULL;
          
          delete curr;
          
    }
}
int main(){
    Node* node1=new Node(10);
    Node* head=node1;
    Node* tail=node1;
    print(head);
    insertAtTail(tail,11);
     insertAtTail(tail,12);
     insertAtTail(tail,13);
    print(head);
    insertAtPosition(tail,head,2,22);
      insertAtPosition(tail,head,1,22);
           insertAtPosition(tail,head,7,27);
    print(head);
    cout<<"head "<<head->data<<endl;
    cout<<"Tail "<<tail->data<<endl;
     deleteNode(7,head,tail);
      cout<<"head "<<head->data<<endl;
    cout<<"Tail "<<tail->data<<endl;
     print(head);
    return 0;
}
