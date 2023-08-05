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
    ListNode* reverseKGroup(ListNode* head, int k) {
        // Complete this method
        if(!head) return head;
        
        //reverse first k nodes
        int c = 0,cnt_temp=0;
        ListNode* curr = head,*prev=NULL,*next=NULL,*temp=head;
        while(temp and cnt_temp<k){
            temp=temp->next;cnt_temp++;
        }
        
        if(temp == NULL and cnt_temp==k){
            while(curr and c<k){
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
            c++;
        }

        
        if(next){
            head->next = reverseKGroup(next,k);
        }
        return prev;
        }

        if(temp==NULL) return head;

        
        while(curr and c<k){
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
            c++;
        }

        
        if(next){
            head->next = reverseKGroup(next,k);
        }
        return prev;


    }
};