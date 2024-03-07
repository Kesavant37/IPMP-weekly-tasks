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
    ListNode* rotateRight(ListNode* head, int k) {
       int cnt=0;
       ListNode* current=head;
       while(current!=NULL){
           cnt++;
           current=current->next;
       }
       if(cnt==0)return NULL;
       k=k%cnt;
       
       current=head;
       for(int i=1;i<cnt-k;i++){
           if(current==NULL)return head;
           current=current->next;
       }
       ListNode* temp=current;
       vector<int>ans;
       while(current->next!=NULL){
          current=current->next;
          ans.push_back(current->val);
       }
       for(int i=ans.size()-1;i>=0;i--){
           head=new ListNode(ans[i],head);
       }
       temp->next=NULL;
       return head;
        
    }
};
