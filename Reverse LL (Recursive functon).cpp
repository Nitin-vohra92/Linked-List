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

node *reverse_linked_list_rec(node *head)
{
  // base case 
   if(head->next==NULL)
    return head;
   
    node* tmp=head->next;
    head->next=NULL;
    
    // recursive call
    node* hd=reverse_linked_list_rec(tmp);
   // reversing LL
   
    tmp->next=head;
    return hd;
    
   }  

