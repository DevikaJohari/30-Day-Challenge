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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* curr;
        ListNode* prev;
        ListNode* dummy= new ListNode(0,head);
        curr=head;
        prev=dummy;
        while(curr!=NULL){
        if(curr->next!=NULL && curr->val==curr->next->val)
        {
           
            while(curr->next!=NULL && curr->val==curr->next->val ){
                curr=curr->next;
            }
            prev->next=curr->next;
            curr=curr->next;
            }
        
        else
        {
            curr=curr->next;
            prev=prev->next;
        }
        }
        return dummy->next;
    }
};
