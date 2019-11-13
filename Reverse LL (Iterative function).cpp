// creating class node
class node
{
public:
    int data;
    node * next;
    node(int data){
        this->data=data;
        this->next=NULL;
    }
};

node* rev_linkedlist_itr(node* head)
{
   
  node*current=head;
  node*previous=NULL;
  node*next=NULL;
  
  while(current!=NULL)
  {
    next=current->next;
    current->next=previous;
    previous=current;
    current=next;
  }
  head=previous;
  return head;
  
}

