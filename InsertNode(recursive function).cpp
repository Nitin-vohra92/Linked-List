// creating node class
 class Node{
    public:
    int data;
    Node *next;
    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }
 };

Node* insertNodeRec(Node *head, int i, int data) {
    
    // base condition
  if(head==NULL)
    return head;
  
  // inserting node
    if(i==0)
    {
      Node *n =new Node(data);
      n->next=head;
      head=n;
      return head;
    }
  
  // recursive calling
  Node *p=insertNodeRec(head->next,i-1,data);
  head->next=p;
  return head;
  
  
}



