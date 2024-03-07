/*
Following is the class structure of the Node class:

class Node
{
public:
    int data;
    Node *next;
    Node()
    {
        this->data = 0;
        next = NULL;
    }
    Node(int data)
    {
        this->data = data; 
        this->next = NULL;
    }
    Node(int data, Node* next)
    {
        this->data = data;
        this->next = next;
    }
};
*/

Node* sortList(Node *head){
    // Write your code here.
    Node *head0=NULL;
    Node *head1=NULL;
    Node *head2=NULL;
    Node *current0=NULL;
    Node *current1=NULL;
    Node *current2=NULL;
    Node *current=head;
    Node *temp=head;
    while(current!=NULL){
        //temp=current->next;
        if(current->data==1){
            if(head1==NULL){
                head1=current;
                current1=head1;
            }
            else{
                current1->next=current;
                current1=current1->next;
            }
        }
        else if(current->data==0){
            if(head0==NULL){
                head0=current;
                current0=head0;
            }
            else{
                current0->next=current;
                current0=current0->next;
            }
        }
        else if(current->data==2){
            if(head2==NULL){
                head2=current;
                current2=head2;
            }
            else{
                current2->next=current;
                current2=current2->next;
            }
        }
        current=current->next;
        
    }
        
    /*current0->next=head1;
    current1->next=head2;
    return head0;*/
     head0=(head0)?head0:(head1?head1:head2);
     current0?current0->next=head1:NULL;
     current1?current1->next=head2:current0?current0->next=head2:current0=head2;
     current2?current2->next=NULL:current2=NULL;
     return head0;
