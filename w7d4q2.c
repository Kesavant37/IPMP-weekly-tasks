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
    void insert(ListNode*head,int x){
        if(head==NULL){
            head=new ListNode(x);
            
        }
        else{
        ListNode* current=head;
        while(current->next!=NULL){
            current=current->next;
        }
        current->next=new ListNode(x);}
        
    }
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1==NULL&&list2==NULL)return NULL;
        if(list1==NULL)return list2;
        else if(list2==NULL)return list1;
        ListNode* head=new ListNode();
        ListNode* current=list1;
        ListNode* current2=list2;
        int cnt=0,cnt1=0;
        while(current!=NULL){
            current=current->next;
            cnt++;
        }
        while(current2 !=NULL){
            current2=current2->next;
            cnt1++;
        }
        current=list1;
        current2=list2;
        int i=0,j=0,k=0;
        while(i<cnt&&j<cnt1){
            if((current->val)<=(current2->val)){
                insert(head,current->val);
                current=current->next;
                i++;
                k++;

            }
            else{
                insert(head,current2->val);
                current2=current2->next;
                j++;
                k++;

            }
        }
        while(i<cnt){
            //if(current->val<=current2->val){
                insert(head,current->val);
                current=current->next;
                i++;
                k++;

            }
        while(j<cnt1){
                insert(head,current2->val);
                current2=current2->next;
                j++;
                k++;

            }
            
        return head->next;
        
        
        
    }
};
