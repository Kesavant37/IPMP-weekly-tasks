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
    ListNode* middleNode(ListNode* head) {
        ListNode* current=head;
        ListNode* curr=head;
        while(current!=NULL){
            if(current->next==NULL)return curr;
            curr=curr->next;
            current=current->next->next;    
        }
        return (curr);
        
    }
};
