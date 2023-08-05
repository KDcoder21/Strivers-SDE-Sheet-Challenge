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
    ListNode *detectCycle(ListNode *head) {
        ListNode* slow=head,*fast=head,*p1=head;
        //From leetcode
        while(slow and fast){
            slow=slow->next;
            fast=fast->next;
            if(fast){
                fast=fast->next;
            }
            if(slow==fast){
                break;
            }
        }
        if(!slow or !fast){
            return NULL;
        }
        while(p1!=slow){
            p1=p1->next;slow=slow->next;
        }
        return slow;
    }
};