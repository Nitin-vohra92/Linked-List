// create node class
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

bool check_palindrome(node* head)
{
   // base condition
  if(head==NULL)
    return true;
  
  int len=0;
  node*p1=head;
  node*p2=head;
  node*temp=head;
  // finding length
  while(temp!=NULL)
  {
    len++;
    temp=temp->next;
  }
  for(int i=0;i<len-2;i++)
  {
    p2=p2->next;
  }
  node*x=p2->next;
  p2->next=NULL;
  // recursive calling of palindrome function
  if((p1->data)==(x->data))
  {
    bool x=check_palindrome(p1->next);
    return x;
  }
  else
  {
    return false;
  }
}
