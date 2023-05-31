void deletekey(Node** head_ref, int key){
    Node * temp,*prev;
    temp=*head_ref;
    //key is present  in head;
    if(temp!=NULL && temp->data==key){
        *head_ref=temp->next;
        free(temp);
        return;
    }
    //we traverse the linked list and keep track of prev node;
    while(temp!=NULL && temp->data !=key){
        prev=temp;
        temp=temp->next;
    }
    ///if we didn't got the key element in linked list
    if(temp==NULL)
    return;
    ///key mil gya
    if(temp!=NULL){
     prev->next=temp->next;
     free(temp);
    }
    
    
}
