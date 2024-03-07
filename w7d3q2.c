/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        ListNode *current=head;
        while(head==NULL||head->next==NULL||head->next->next==NULL)return head;
        current=current->next;
        ListNode* temp1=head;
        ListNode* temp2=NULL;
        while(current&&current->next){
           ListNode* temp=current->next;
           
           current->next=temp->next;
           if(temp2==NULL)temp2=current;
           temp->next=temp2;
           temp1->next=temp;
           
           current=current->next;
           temp1=temp1->next;
        }
        return head;

        

        
    }
};
