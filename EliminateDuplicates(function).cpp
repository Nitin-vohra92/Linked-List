/*

Sample Input 1 :
1 2 3 3 3 4 4 5 5 5 7 -1
Sample Output 1 :
1 2 3 4 5 7

*/
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

node* eliminate_duplicate(node* head)
{
  if(head==NULL||head->next==NULL)
    return head;
  
  node*h1=head;
  
  node*h2=head->next;
  while(h2!=NULL)
  {
    if(h1->data!=h2->data)
    {
      h1=h2;
      h2=h2->next;
    }
    else if(h1->data==h2->data)
    {
      h2=h2->next;
    }
    
    h1->next=h2;
    
  }
  return head;
  
}
