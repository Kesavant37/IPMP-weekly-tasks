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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* current1=l1;
        ListNode* current2=l2;
        int cnt1=0,cnt2=0;
        ListNode* head3=new ListNode();
        ListNode* current3=head3;
        while(current1&&current2){
            ListNode *temp=new ListNode((cnt1+current1->val+current2->val)%10);
            current3->next=temp;
            cnt1=(cnt1+current1->val+current2->val)/10;
            current1=current1->next;
            current2=current2->next;
            current3=current3->next;
        }
        while(current1){
            ListNode *temp=new ListNode((cnt1+current1->val)%10);
            current3->next=temp;
            cnt1=(cnt1+current1->val)/10;
            current1=current1->next;
            //current2=current2->next;
            current3=current3->next;
        }
        while(current2){
            ListNode *temp=new ListNode((cnt1+current2->val)%10);
            current3->next=temp;
            cnt1=(cnt1+current2->val)/10;
            //current1=current1->next;
            current2=current2->next;
            current3=current3->next;
        }
        if(cnt1)current3->next=new ListNode(cnt1);
        head3=head3->next;
        return head3;
        

    }
};
