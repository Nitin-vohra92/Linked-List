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

 
Node* deleteNode(Node *head, int i)
{
  int len=0;
  Node *temp=head;
  // finding length of LL
  while(temp!=NULL)
  {
    len++;
    temp=temp->next;
  }
  
  // deletion at beginning
  
  if(i==0)
  {
    head=head->next;
    return head;
  }
  // deletion outside LL
  else if (i>=len)
  {
    return head;
  }
  // deletion at middle
  
  else
  {
    Node *temp1=head;
    int j =0;
    while(j<i-1)
    {
      temp1=temp1->next;
      j++;
    }
    temp1->next=temp1->next->next;
    return head;
  }
 
}
