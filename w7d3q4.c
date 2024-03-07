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
    ListNode* reverseList(ListNode* head) {
        ListNode *current=head;
        ListNode *prev=NULL;
        ListNode *temp=head;
        if(head==NULL||head->next==NULL)return head;
        //current=current->next;
        while(current!=NULL){
            temp=current->next;
            current->next=prev;
            prev=current;
            current=temp;
        }
        head=prev;
        return head;
        
    }
};
