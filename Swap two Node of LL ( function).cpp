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
node* swap_nodes(node *head,int i,int j)
{
 node*p1=head;
 node*c1=head; 
 node*p2=head; 
 node*c2=head;
 node*x=NULL;
  int temp;
  int k=0;
  if(i>j)
  {
    temp=i;
    i=j;
    j=temp;
  }
  if(i==0 && j==1)
  {
    c1=head;
    c2=head->next;
    c1->next=c2->next;
    c2->next=c1;
    head=c2;
  }
  
  else if(i== 0)
  {
    k=0;
    while(k<j-1)
    {
      p2=p2->next;
      k++;
    }
    c2=p2->next;
    int temp=c1->data;
    c1->data=c2->data;
    c2->data=temp; 
  }
  else if(j-i==0)
  {
    k=0;
    while(k<i-1)
    {
      p1=p1->next;
    }
    c1=c1->next;
    k=0;
    while(k<j-1)
    {
      p2=p2->next;
    }
    c2=p2->next;
    p1->next=c2;
    p2->next=c1;
    c1->next=c2->next;
    c2->next=c1;  
  }
 
  else{
    k=0;
    while(k<i-1)
    {
      p1=p1->next;
      k++;
    }
    c1=p1->next;
    k=0;
    
    while(k<j-1)
    {
      p2=p2->next;
      k++;
    }
    c2=p2->next;
    int tempp=c2->data;
    c2->data=c1->data;
    c1->data=tempp;
  }
  return head;
}
