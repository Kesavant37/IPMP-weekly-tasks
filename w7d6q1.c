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
    ListNode* sortList(ListNode* head) {
        ListNode *current=head;
        vector<int>ans;
        while(current!=NULL){
            ans.push_back(current->val);
            current=current->next;
        }
        sort(ans.begin(),ans.end());
        int i=0;
        current=head;
        while(current!=NULL){
            current->val=ans[i++];
            current=current->next;
        }
        return head;
        
    }
};
