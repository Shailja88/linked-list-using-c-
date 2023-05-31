#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node* next;
};
void printList(Node * he){
    while(he){
        if(he->next==NULL)
            cout<<he->data<<endl;
            else
                cout<<he->data<<"->";
                he=he->next;
            
        
    }
}
void printCircularList(Node* first){
   Node* temp=first;
   if(first!=NULL){
       cout<<temp->data<<" ";
       temp=temp->next;
       while(temp!=first){
           cout<<temp->data<<" ";
           temp=temp->next;
       }
   }
}
int main(){
 Node *head=new Node();
 Node *second=new Node();
 Node *third=new Node();
 Node *forth=new Node();
 Node *fifth=new Node();
 Node *six=new Node();
 Node *seven=new Node();
 Node *eight=new Node();
 Node *nine=new Node();
 head->data=5;head->next=second;
 second->data=4;second->next=third;
 third->data=42;third->next=forth;
 forth->data=3;forth->next=fifth;
 fifth->data=9;fifth->next=six;
 six->data=-2;six->next=seven;
 seven->data=92;seven->next=eight;
 eight->data=90;eight->next=nine;
 nine->data=34;nine->next=head;
 

printCircularList(head);
}
