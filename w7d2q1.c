

/* a Node of the doubly linked list 
struct Node
{
  int data;
  struct Node *next;
  struct Node *prev;
  Node(int x) { data = x; next = prev = NULL; }
}; */

//Function to insert a new node at given position in doubly linked list.
void addNode(Node *head, int pos, int data)
{
    Node* temp=new Node(data);
    Node* current=head;
   for(int i=0;i<pos;i++){
       current=current->next;
   }
   temp->next=current->next;
   current->next=temp;
   temp->prev=current;
   if(temp->next)
   temp->next->prev=temp;
}
