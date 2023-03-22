// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
class Node{
  public:
  int data;
  Node* next;//pointer pointing the address of next data;
  //constructor
  Node(int data){
      this->data=data;
      this->next=NULL;
  }
};
int main() {
//creating object in heap "new"

Node* node1=new Node(10);
cout<<node1->data<<endl;
cout<<node1->next<<endl;
    return 0;
}
