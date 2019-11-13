// creating node class

class node
{
public:
    int data;
    node * next;
    node(int data)
    {
        this->data=data;
        this->next=NULL;
    }
};

voiprint_linkedlist_spl(node*head)
{
    // base condition
    
  if(head->next!=NULL)
    return head;
    
    // recursive function call
    
  node *temp=print_linkedlist_spl(head->next);
  
  // printing LL
  
  while(temp->next!=NULL)
  {
    temp=temp->next;
  }
  
  temp->next=head;
  head=temp;
  return head;
}
