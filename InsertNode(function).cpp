
// creating node class

class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this -> data = data;
        this -> next = NULL;
    }
};
 

Node* insertNode(Node *head, int pos, int data)
{
    
  int len=0;
  
  Node *temp=head;
  
  while(temp!=NULL)
  {
    len++;
    temp=temp->next;
  }
  
  // if insertion at beginning
  if(pos==0)
  {
    Node *n=new Node(data);
    n->next=head;
    head=n;
    return head;
  }
  
  // if insertion outside the LL
  else if (pos>=len)
  {
    return head;
  }
  
  // if insertion at middle
  else
  {
    Node *temp1=head;
    Node *n=new Node(data);
    int i =0;
    
    while(i<pos-1)
    {
      temp1=temp1->next;
      i++;
    }
    //inserting node at ith position
    Node *x=temp1->next;
    temp1->next=n;
    n->next=x;
    return head;
    
  }
 }
    



