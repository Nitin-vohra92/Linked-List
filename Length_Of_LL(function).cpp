
/*
 This function can be used for finding length of linear LL
*/
// creating a node class 
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
// function for finding length

int length(Node *head)
{ 
  int len=0;
  Node*temp=head;
  while(temp!=NULL)
  {
  //increasing length by 1 and iterating the list
    len=len+1;
    temp=temp->next;
 
 }
  return len;   
}


