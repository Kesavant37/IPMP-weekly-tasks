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
    bool isPalindrome(ListNode* head) {
        
        ListNode* current=head;
        vector<int>ans;
        while(current!=NULL){
             ans.push_back(current->val);
            current=current->next;
           
        }
        int i=0;
        int j=ans.size()-1;
        while(i<=j){
            if(ans[i]!=ans[j])return false;
            i++;
            j--;
        }
        return true;
        

        
        
    }
};
