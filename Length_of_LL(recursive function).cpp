
// node class 
class Node{
public:
    int data;
    Node *next;
    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }
};


int length(Node *head)
{
   // base condition
    if(head==NULL)
      return 0;
      
   // recursive function calling
  
  int b=length(head->next);
  // returning length
  
  return b+1;
}


