// create node class

class Node
{
public:
    int data;
    Node *next;
    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }
};
 

Node* mergeTwoLLs(Node *head1, Node *head2)
{    
  Node *head;
  // base condition
  if(head1==NULL)
    return head2;
    
  if(head2==NULL)
    return head1;
 
 // merging two LL
  if(head1->data < head2->data)
  {
    head=head1;
    head1=head1->next;
  }
  else{
    head=head2;
    head2=head2->next;
  }

// recursive calling of function
  head->next= mergeTwoLLs(head1,head2);
  return head;
}
  
    



