

/* Link list Node 
struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};
*/

/*You are required to complete below method*/
Node* deleteNode(Node *head,int x)
{
    if(head==NULL)return NULL;
    if(x==1){
        head=head->next;
        return head;
    }
    Node *temp=head;
    for(int i=0;i<x-2;i++){
        temp=temp->next;
    }
    if(temp->next==NULL)return head;
    temp->next=temp->next->next;
    return head;
    //Your code here
}
