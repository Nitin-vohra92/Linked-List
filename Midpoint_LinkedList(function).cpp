// creating class node
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


node* midpoint_linkedlist(node *head)
{

   int len=0;
  node*temp=head;
  // finding length
  while(temp!=NULL)
  {
    len++;
    temp=temp->next;
  }
  node*temp2=head;
  // finding midpoint
    int midpoint=(len-1)/2;
    int i=0;
  while(i<midpoint)
  {
    temp2=temp2->next;
    i++;
  }
  return temp2;

}
