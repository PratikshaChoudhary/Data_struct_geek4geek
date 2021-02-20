
/*Structure of the linked list node is as
struct Node {
  int data;
  struct Node * next;
  Node(int x) {
    data = x;
    next = NULL;
  }
}; */

// function inserts the data in front of the list
Node *insertAtBegining(Node *head, int newData) {
    struct Node* begin=new Node(newData);
    begin->next=head;
    
    return begin;
}


// function appends the data at the end of the list
Node *insertAtEnd(Node *head, int newData)  {
    struct Node* end=new Node(newData);
    struct Node* current;
    current=head;

    if(head==NULL)
      return end;
    
    while(current->next!=end){
      if(current->next!=NULL)
        current=current->next;
      else
        current->next=end;
    }
    
    end->next=NULL;
    
   return head;
}
