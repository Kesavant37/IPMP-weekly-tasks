/* Structure of Node
struct Node
{
  int data;
  struct Node *next;
  struct Node *prev;
  
  Node(int x){
      data = x;
      next = NULL;
      prev = NULL;
  }
  
};
*/

class Solution
{
    public:
    Node* deleteNode(Node *head, int x)
    {
        Node *current=head;
        if(head->next == NULL&&x==1)return NULL;
        if(x==1){
            head=head->next;
            head->prev=NULL;
            return head;
            
        }
      for(int i=0;i<x-2;i++){
          current=current->next;
      }
      current->next=current->next->next;
      Node *temp=current;
      current=current->next;
      if(current)current->prev=temp;
      return head;
    }
};
