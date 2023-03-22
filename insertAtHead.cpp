//insert at head 
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

void insertAtHead(Node* &head , int d)//taking reference &head for not creating copy of the list 
{
    //new node create 
    Node* temp=new Node(d);
    temp->next=head;
    head=temp;
}
//printing linked list 
void print(Node* &head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int main(){
    //created a new node 
    Node* node1=new Node(10);
   

    //head pointed to node1
    Node* head = node1;
        print(head);
    insertAtHead(head,14);
        print(head);
        insertAtHead(head,13);
        print(head);
    return 0;
}
