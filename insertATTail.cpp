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
};
void insertAtTail(Node* &tail,int d){
    //new node create;
    Node* temp=new Node(d);
tail->next=temp;
tail=tail->next; 
 
}

void print(Node* &head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
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
    
    return 0;
}
