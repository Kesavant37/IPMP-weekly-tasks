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
    ListNode* deleteMiddle(ListNode* head) {
        if(head==NULL||head->next==NULL)return NULL;
        int cnt=0;
        ListNode* current=head;
        while(current!=NULL){
            current=current->next;
            cnt++;
        }
        current=head;
        for(int i=0;i<(cnt/2)-1;i++){
            current=current->next;
        }
        current->next=current->next->next;
        return head;
    }
};
