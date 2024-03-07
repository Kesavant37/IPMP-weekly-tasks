/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *current=headA;
        ListNode *current1=headB;
        int cnt=0,cnt1=0;
        while(current!=NULL){
            current=current->next;
            cnt++;
        }
        while(current1!=NULL){
            current1=current1->next;
            cnt1++;
        }
        current=headA;
        current1=headB;
        int c=max((cnt-cnt1),(cnt1-cnt));
        for(int i=0 ;i<c;i++){
            if(cnt>cnt1){
                current=current->next;
                continue;
            }
            
            current1=current1->next;
        }
        while(current1!=current){
            current=current->next;
            current1=current1->next;
            if(current==NULL||current1==NULL)return 0;
        }
        return current;
        
        
    }
};
