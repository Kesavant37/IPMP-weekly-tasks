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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        vector<int>ans;
        for(int i=0;i<lists.size();i++){
            ListNode*current=lists[i];
            while(current!=NULL){
                ans.push_back(current->val);
                current=current->next;
            }
        }
        sort(ans.begin(),ans.end());
        ListNode* head=new ListNode();
        ListNode*current=head;
        for(int i=0;i<ans.size();i++){
            current->next=new ListNode(ans[i]);
            current=current->next;
        }
        return (head->next);
        
    }
};
