/*
struct Node
{
    int data;
    Node * next;
    Node * prev;
    Node (int x)
    {
        data=x;
        next=NULL;
        prev=NULL;
    }
        
};
*/
class Solution
{
    public:
    Node* reverseDLL(Node * head)
    {
        Node *temp;
        Node *current=head;
        while(current->next!=NULL)current=current->next;
        head=current;
        while(current!=NULL){
            swap(current->prev,current->next);
            current=current->next;
        }
        return head;
        //Your code here
    }
};

